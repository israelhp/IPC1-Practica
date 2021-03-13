#ifndef _ENCRYPT
#define _ENCRYPT

#include <iostream>
#include <cctype>
#include <string>
#include <cstring>
#include <clocale>


using namespace std; 

class Encrypt
{ 
private:
        string DEFAULT_METOD [28][2]= {
                {"A","0"},
                {"B","1"},
                {"C","2"},
                {"D","3"},
                {"E","4"},
                {"F","5"},
                {"G","6"},
                {"H","7"},
                {"I","8"},
                {"J","9"},
                {"K","10"},
                {"L","11"},
                {"M","12"},
                {"N","13"},
                {"Ñ","14"},
                {"O","15"},
                {"P","16"},
                {"Q","17"},
                {"R","18"},
                {"S","19"},
                {"T","20"},
                {"U","21"},
                {"V","22"},
                {"W","23"},
                {"X","24"},
                {"Y","25"},
                {"Z","26"},
                {" ","27"},
};
        string **coding_table; 
        string text;
        int *text_encrypted; 
        int **matrix_m;
        int **matrix_ma; 
        int **matrix_mb;
public:
        Encrypt();
        string generate_text_m(string); 
        int check_text(int);
        int generate_matrix_m();    
        int *get_text_encrypted();
        void generate_matrix_ma();
        
        //aux
        void add_spaces();
        ~Encrypt();
};

#endif