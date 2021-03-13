#include "./messages.h"

/*void m_menu(){    
        cout<<"=============MENU============="<<endl; 
        cout<<"| 1. Encriptar               |"<<endl;
        cout<<"| 2. Desencriptar            |"<<endl;
        cout<<"| 3. Ataque con texto claro  |"<<endl;
        cout<<"| 4. Generar Reportes        |"<<endl; 
        cout<<"=============================="<<endl;     
}*/

void m_menu(const char *list[],int num_options){
        cout<<"=============MENU============="<<endl;    
        for(int i=0; i<num_options; i++){
                cout<<"  "<<(i+1)<<". "<<list[i]<<endl;
        }
        cout<<"=============================="<<endl; 
}

void m_error(){  
        cout<<"=============================="<<endl; 
        cout<<"|      Valor incorrecto       |"<<endl; 
        cout<<"|      Ocurrio un error       |"<<endl;
        cout<<"=============================="<<endl;
}

void m_request_message(char *info){
        cout<<"=============================="<<endl;
        cout<<"  "<<info<<endl;
        cout<<"=============================="<<endl;
        cout<<"   => ";    
}

void m_tried(){
        cout<<"=============================="<<endl;
        cout<<"|      Valor incorrecto       |"<<endl; 
        cout<<"|     Intentalo de nuevo      |"<<endl;
        cout<<"=============================="<<endl;
}