#include <iostream>
#include <cmath>

int main(){

char op;
double num1;
double num2;
double result;

std::cout << "************** CALCULADORA**************" << std::endl;

std::cout << "enter either ( + - * /): ";
std::cin >> op;

std::cout << "Enter number 1: ";
std::cin >> num1;
std::cout << "Enter number 2: ";
std::cin >> num2;

switch(op){
    case '+':
        result = num1 + num2;
        std::cout << "result = " << result << std::endl;
        break;
    case '-':
        result = num1 - num2;
        std::cout << "result = " << result << std::endl;
        break;
    case '*':
        result = num1 * num2;
        std::cout << "result = " << result << std::endl;
        break;
    case '/':
        result = num1 / num2;
        std::cout << "result = " << result << std::endl;
        break;
    default:
        std::cout << "please put the righ operator ( + - * /)!!!" << std::endl; 
        break;    
}

std::cout << "************************************************";

    return 0;
}