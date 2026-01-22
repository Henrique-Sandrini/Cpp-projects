#include <iostream>
// nested loops: LOOP DENTRO DE OUTRO LOOP
int main (){

    int rows;
    int colums;
    char symbol;

    std::cout << "How many rows: " << '\n';
    std::cin >> rows;

    std::cout << "How many colums: " << '\n';
    std::cin >> colums;

    std::cout << "Whats the sybom: " << '\n';
    std::cin >> symbol;

    for( int i = 1; i <=rows; i++){

        for( int j = 1; j <=colums; j++){
            std::cout << symbol;
        }
        std::cout << '\n';
    }
   

    return 0;
}