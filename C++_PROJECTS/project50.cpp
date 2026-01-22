#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
//IMPORTANTISSIMO!!!!
//          MEMORIA DINAMICA = MEMORIA QUE É ALOCADA APÓS O PROGRAMA SER COMPILADO E RODAR
//          USE 'new' PARA ALOCAR A MEMORIA.
//          
//          ÚTIL QUANDO NAO SABEMOS O QUANTO DE MEMORIA SERA ALOCADA.
//          AINDA MAIS QUANDO SE UTLIZA INPUT DO USUARIO.

int main (){

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: \n";
    std::cin >> size;

    pGrades = new char [5];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #: " << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << ' ';
    }

    delete [] pGrades;

    return 0;
}