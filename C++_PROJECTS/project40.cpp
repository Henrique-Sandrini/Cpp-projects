#include <iostream>
#include <cmath>
#include <iomanip>
//como receber informação de um usuário na array[]
int main (){

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;
    //o loop é para saber quantas comidas ele gosta e quebralo caso aperte q.
    for (int i = 0; i < size; i++ ){
        std::cout << "Enter a food you like or q to quit #" << i + 1 <<": ";
        std::getline(std::cin, temp);
        if(temp == "q" ){
            break;
        }else{
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food: \n";
    // este for é pra deixar vazio caso o usuario nao coloque todas as opcoes.
    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << '\n';
    }

    return 0;
}