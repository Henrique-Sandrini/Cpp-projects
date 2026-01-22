#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
//POINTERS, aloca o endereço de memoria de uma variavel em outra variavel.
//              as vezes é mais facil trabalhar com endereços de memorias.

int main (){

    std::string name = "henrique";
    int age = 19;
    std::string freePizzas[] = {"PIZZA 1, PIZZA 2, PIZZA 3, PIZZA 4, PIZZA 5 " };

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pfreePizzas;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';

    return 0;
}