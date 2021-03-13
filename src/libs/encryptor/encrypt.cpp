#include "./encrypt.h"
#include <fstream>
Encrypt::Encrypt(){
        coding_table = new string*[28];
        for(int i=0; i<28; i++){
                coding_table[i] = new string[2]; 
        }
        for(int i=0; i<28; i++){
                for(int j=0; j<2; j++){
                        coding_table[i][j] = DEFAULT_METOD[i][j]; 
                }
        } 
        
}
Encrypt::~Encrypt(){     
}
/*int *Encrypt::get_text_encrypted(){
        return this->text_encrypted;
}*/
string Encrypt::generate_text_m(string text){
        this->text = text;
        int length_text = this->text.length();
        
        for(int i=0; i<length_text; i++){
                if(this->text[i] == 32){
                        this->text[i] = '*';
                }
                this->text[i] = toupper(this->text[i]);
        }

        add_spaces();  

        cout<<this->text<<endl;
        this->text_encrypted = new int[length_text];

        for(int i=0; i<length_text; i++){
                this->text_encrypted[i] = check_text(i);
                cout<<this->text[i]<< " "<<this->text_encrypted[i]<<endl; 
        }

        return this->text;
}
int Encrypt::check_text(int pos){
        for(int i=0; i<28; i++){
                string aux = this->coding_table[i][0];
                char buffer = aux[0];
                if(this->text[pos] == buffer){
                                return atoi(this->coding_table[i][1].c_str());
                }else if(this->text[pos] == '*'){
                        return 27;
                }
        }
        return 27;
}
void Encrypt::add_spaces(){
        if((this->text.length()%3) == 0){
                return; 
        }else{
                this->text += "*";
                return add_spaces();
        }
}


int Encrypt::generate_matrix_m(){
        int num_colums = this->text.length()/3;
        int k = 0;
        this->matrix_m = new int*[3]; 
        for(int i=0; i<3; i++){
                this->matrix_m[i] = new int[num_colums]; 
        }

        for(int i=0; i<num_colums; i++){
                for(int j = 0; j<3; j++){
                        this->matrix_m[j][i] = this->text_encrypted[k];
                        k++;
                }
        }


        for(int i=0; i<3; i++){
                for(int j = 0; j<num_colums; j++){
                        cout<<this->matrix_m[i][j]<<"   ";                        
                }
                cout<<endl;
        }
        
        return 1;
}   

void generate_matrix_ma(string directory){
        ifstream archivo(directory.c_str(),ios::in); 
        while (!archivo.eof()){
                string aux; 
                getline(archivo,aux);
                cout<<aux<<endl;
        }  
        archivo.close(); 
}