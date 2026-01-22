#include <iostream>
#include <cmath>
//PARTE 10, EXERCICIO DA HIPOTENUSA.


int main (){

    double a;
    double b;
    double c;

    std::cout << "COLOQUE O VALOR DE A: " << std::endl;
    std::cin >> a;
    std::cout << "COLOQUE O VALOR DE B: " << std::endl;
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "O VALOR DA HIPOTENUSA É: " << c;



    return 0;
}