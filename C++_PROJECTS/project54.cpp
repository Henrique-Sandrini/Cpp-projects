#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
// passar structs como argumentos.

struct cars{
    std::string model;
    int year;
    std::string color;
};

void printCar(cars car);
void paintCar(cars &car, std::string color);

int main (){

    cars car1;
    cars car2;

    car1.model = "Impala";
    car1.color = "Black";
    car1.year = 1967;

    car2.model = "Camaro";
    car2.color = "Yellow";
    car2.year = 2013;
    
    paintCar(car1, "Silver");
    paintCar(car2, "Gold");

    printCar(car1);
    printCar(car2);

    return 0;
}
void printCar(cars car){
    std::cout << car.model << "\n";
    std::cout << car.color << "\n";
    std::cout << car.year << "\n";
}
void paintCar(cars &car, std::string color){
    car.color = color;
}