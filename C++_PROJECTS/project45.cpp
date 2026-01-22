#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
//variaveis constantes: apenas ler. nao modificar. bom para segurança e afins.
// demonstra a intenção da função a outros progamadores.";

void printInfo(const std::string name, const int age);

int main (){

    std::string name = "Henrique";
    int age = 19;

    printInfo(name, age);


    return 0;
}
void printInfo(const std::string name, const int age){
    std::cout << name << '\n';
    std::cout << age << '\n';

}