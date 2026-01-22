#include <iostream>
#include <cmath>
#include <iomanip>

//ARRAYS, guarda multiplas variaveis de uma mesma topologia.        

int main (){

    std::string car[] = {"mustang", "chevette", "camaro", "corsa", "onix"};
    car[0] = "Lorem Ipsum";

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';
    std::cout << car[3] << '\n';
    std::cout << car[4] << '\n';


    return 0;
}