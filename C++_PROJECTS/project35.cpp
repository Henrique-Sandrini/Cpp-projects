#include <iostream>
#include <cmath>
#include <iomanip>

int main (){

    std::string students[] = {"Giovana,", "Isabelly,", "Lara", "Yasmin"};

    for(std::string student : students){
        std::cout << student ;  //um modo mais simplificado de juntar e  as arrays;
    }


    return 0;
}