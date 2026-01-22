#include <iostream>
#include <cmath>

int main () {
// OPERADOR TERNARY utlizando se "? e :" é possivel substituir todo o código do if else. simplificador de códigos.

// exemplo:
/*
 int nota;

    std::cout << "digite sua nota: \n";
    std::cin >> nota;


 nota >= 6 ? std::cout << " voce passou\n" : std::cout << "voce nao passou\n";
    // nesta frase, o "?" corresponde ao termo IF, e o ":" ao ELSE, substituindo todo aquele código.
*/

//int number = 6;
//number % 2 == 1 ? std::cout << "este numero e odd (impar)" : std::cout << "este numero é par";

bool verificacao = false;
verificacao ? std::cout << "passou" : std::cout << "nao passou";
std:: cout << (verificacao ? "passou" : "nao passou" );

//resumidamente um modo mais facil de fazer uma operação de if else. " condição ? opcao 1 : opcao 2; "

}