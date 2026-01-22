#include <iostream>
#include <cmath>
#include <iomanip>

int main (){

    std::string students[] = {"Giovana,", "Isabelly,", "Lara", "Yasmin"};

    for(int i =0; i < sizeof(students)/sizeof(std::string); i++  ){ //para mostrar todos os dados de uma array basta fazer esta equação usando for
            std::cout << students[i] << ' '; 
    }

    return 0;
}