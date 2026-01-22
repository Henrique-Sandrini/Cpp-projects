#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
// verificador de cartao de credit0.
int getDigit (const int number); 
int sumOddDigits(const std::string card_number);
int sumEvenDigits(const std::string card_number);


int main (){

    std::string card_number;
    int result = 0;
    
    std::cout << "Enter a credit card number: ";
    std::cin >> card_number;

    result = sumEvenDigits(card_number) + sumOddDigits(card_number);

    if(result % 10 == 0){
        std::cout << card_number << " is valid!";   
    }else{
        std::cout << card_number << " is not valid!";   
    }


    return 0;
}
int getDigit (const int number){

    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const std::string card_number){

    int sum = 0;

    for(int i = card_number.size() - 1; i >= 0; i-= 2){
        sum += card_number[i] - '0';  
    }

    return sum;
}
int sumEvenDigits(const std::string card_number){

    int sum = 0;

    for(int i = card_number.size() - 2; i >= 0; i-= 2){
        sum += getDigit((card_number[i] - '0') * 2);  
    }

    return sum;
}