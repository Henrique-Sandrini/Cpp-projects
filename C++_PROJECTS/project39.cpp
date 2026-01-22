#include <iostream>
#include <cmath>
#include <iomanip>
// FUNCAO FILL(), BOM PARA QUANDO TIVER DE COLOCAR MUITOS VALORES E NAO QUERER COLOCALOS MANUALMENTE.
int main (){

    const int SIZE = 99;
    std::string foods[99];
    //  COMEÇO         FIM         VALOR
    fill(foods, foods + (SIZE/3), "PIZZA");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "HAMBURGUER");
    fill(foods + (SIZE/3) * 2, foods + SIZE, "HOTDOG");

    for(std::string food : foods ){

        std::cout << food << "\n";

    }


    return 0;
}