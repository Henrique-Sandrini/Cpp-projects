#include <iostream>
#include <cmath>
#include <iomanip>

int main (){
//SIZEOF() DETERMINA O TAMANO DE UMA VARIAVEL, OBJETO, DECLARACAO EM BYTES.

    double gpa = 5.23; // 8 BYTES
    std::string nome = "legau"; //32 bytes
    char nota = 'MB'; //1 BYTE
    bool aluno = true; // 1 BYTES

    char notas [] = {'M', 'B', 'R', 'I'};

    std::cout << sizeof(notas)/sizeof(char) << " elementos";  // ao fazer isso da pra saber quantos elementos estao presentes em uma ARRAY.
    


    return 0;
}