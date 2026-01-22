#include <iostream>
int main(){

std::cout << " ****** TEMPERATURE CONVERTER ****** \n";

    double temp;
    char unit;

        std::cout << "F = Fahrenheit\n";
        std::cout << "C = Celsius\n";
        std::cout << "wich unit would you like to convert?\n";
        std::cin >> unit;

            if (unit == 'F' || unit == 'f'){
                std::cout << "enter the temperature in Celsius: \n";
                std::cin >> temp;
                temp = (1.8 * temp) + 32.0;
                std::cout << "Temperature is: " << temp << "F\n";
            }
            else if (unit == 'C' || unit == 'c'){
                std::cout << "enter the temperature in Fahrenheit: \n";
                std::cin >> temp;
                temp = (temp - 32) / 1.8;
                std::cout << "Temperature is: \n" << temp << "C\n";
            }else{
                std::cout << "Please put a right character\nf";
            }


std::cout << "*************************************";

    return 0;
}