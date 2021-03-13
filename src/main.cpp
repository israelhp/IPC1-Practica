#include <iostream>
#include <cstdlib>
#include <limits>
#include <string>
#include <clocale>
#include "./libs/messages/messages.h"
#include "./libs/encryptor/encrypt.h"

using namespace std;

/*int menu(const char *[],int);
void encrypted(Encrypt *&);*/


int main(){
    Encrypt *nuevo = new Encrypt();
    string text = "";
   /* nuevo->generate_text_m(text);
    cout<<"Hola"<<endl;*/

    nuevo->generate_matrix_m();

    /*cout<<"Hola";
    nuevo->generate_text_m("Hola como est");*/

    /*setlocale(LC_CTYPE,"Spanish");
    const char *main_menu[5] = {"Encriptar","Desencriptar","Ataque con texto claro","Generar Reportes","Salir"};
    Encrypt *encryptor = new Encrypt();
    system("clear");
    while(true){
        switch (menu(main_menu,5)){
            case 1:
                encrypted(encryptor);
                break;
            case 2: 
                break;
            case 3: 
                break;
            case 4: 
                break;
            case 5:
                exit(0);
            default:
                break;
        }
    }
    delete encryptor;*/
    return 0;
}
/*
int menu(const char *list_menu[],int num_options){
    int option = 0; 
    do{
            option = 0;
            m_menu(list_menu,num_options);  
            cout<< "Ingresa la opcion:"; 
            cin>> option; 
            if(!cin.good()){
                cin.clear();
                cin.ignore(numeric_limits<int>::max(),'\n');
                system("clear"); 
                m_error(); 
                cout<<endl; 
            }else if(option > num_options || option < 1 ) {
                system("clear");
                m_tried(); 
                cout<<endl; 
            }
    }while(option > num_options || option < 1 );
    return option; 
}

void encrypted(Encrypt *&encryptor){
    setlocale(LC_CTYPE,"Spanish");
    
    const char *encrypted_menu[5] = {"Ingreso Mensaje","Ingreso Matriz Clave A","Ingreso Matriz Clave B", "Encriptar","Regresar"};
    string text; 

    system("clear");
    while(true){
        switch (menu(encrypted_menu,5)){
            case 1:
                m_request_message((char*)"Ingresa un texto");
                cin.ignore();
                getline(cin,text);
                encryptor->generate_text_m(text);
                break;
            case 2: 
                break;
            case 3: 
                break;
            case 4: 
                break;
            case 5:
                system("clear");
                return;
            default:
                break;
        }
    }
}


*/