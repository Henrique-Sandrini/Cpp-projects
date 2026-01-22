#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
// ARRAYS MULTIDIMENSIONAIS, OU ARRAYS 2D. LINHAS E COLUNAS. MAIS VALORES.

int main (){
    //              linhas e colunas
    std::string cars[][3] = {{"Mustang", "Onix" " Ka"},
                            {"Corvete", "Camaro", "Zafira"},
                            {"Virago", "DeathStar", "Harley"}};
//  var para ter o tamano da array, ,tanto de colunas quanto linhas 
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);
    // loop for para computar os valores. e um loop interno para as colunas.
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}