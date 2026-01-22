#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
//null pointer, um pointer com valor nulo. null_ptr;

int main (){

    int *pointer = nullptr;
    int x = 123;

    //pointer = &x;

    if(pointer == nullptr){
        std::cout << "adress was not asigned!\n";
        std::cout << *pointer;
    } else {
        std::cout << "adress was asigned!\n";
    }

    return 0;
}