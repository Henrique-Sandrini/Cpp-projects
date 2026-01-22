#include <iostream>
#include <cmath>
//IF CONDITIONs

int main (){

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
    
    if(age > 100){
        std::cout << "too old.";
    }
    else if (age >= 18)
    {
        std::cout << "You're allowed here.";
   
    }
    else if(age < 0){
        std::cout << "you haven't even been born yet.";
    else {
        std::cout << "You're not allowed here.";
    }
    return 0;
}