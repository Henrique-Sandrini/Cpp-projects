#include <iostream>

int main(){

    int num;

    do{
        std::cout << "digite um numero positivo: \n";
    std::cin >> num;
    }while (num < 0);
    std::cout << "o numero e: " << num;

    return 0;
}
