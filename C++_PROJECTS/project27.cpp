#include <iostream>
double square (double lenght);
double cube (double lenght);

int main (){

    double lenght = 6.0;
    double area = square(lenght);
    double volume = cube(lenght);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    return 0;
}
double square(double lenght){
    return lenght * lenght;
}
double cube(double lenght){
    return lenght * lenght * lenght;
}