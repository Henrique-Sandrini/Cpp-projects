#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
//memory adress -> endereço de memoria onde a variavel fica guardada na maquina. utiliazase se $var_name

int main (){

    std::string name = "Sam";
    int age = 19;
    bool student = true;

    std::cout << &name << '\n';

// os dados armazenados são em HEXADECIMAL. importante para o uso dos POINTERS posteriormente.
// os dados em HEXADECIMAL demonstram o bytes ARMAZENADOS. 

    return 0;
}