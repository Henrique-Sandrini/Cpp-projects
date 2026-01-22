#include <iostream>
#include <cmath>
#include <iomanip>

double getTotal(double prices[], int size);

int main (){

    double prices [] = { 25.25, 23123.23, 231.21, 5454.98};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "$" << total;


    return 0;
}
//quando uma array é posta sob outra funcao, ela nao tem mais a capacidade de ler a array princial, por isso deve se fazer o calculo do tamanhho
double getTotal(double prices[], int size) { // deste modo é possivel a array ler outra vez o que esta na main para a outra funcao
    double total = 0;                        // importantissimo. complicado porem com o constume fica fácil.

    for( int i = 0; i < size ; i++ ){
        total = total += prices[i];
    }

    return total;
}