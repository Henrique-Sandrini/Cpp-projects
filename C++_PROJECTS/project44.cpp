#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>


//quando usar o passby VALUE voce cria CÓPIAS, quando usa o passby REFERENCE vc usa o endereço de memoria da variavel, logo a original. (&var)

void swap (std::string &x, std::string &y);
int main (){

    std::string x = "Kool-aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}//usar o passby REFERENCE mais frequentemente. pois passa o real valor, nao uma copia 
void swap (std::string &x, std::string &y){
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}