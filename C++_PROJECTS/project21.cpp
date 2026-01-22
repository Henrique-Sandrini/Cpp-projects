#include <iostream>

int main (){
    // brak = sai do loop, quebra ele
    //continue = continua o loop 

    for (int i = 1; i <= 20; i++) //resumidamente se vc quer excluir algo especifico e nao acabar usa o continue
    {
        if( i == 13){
            continue;
        }
        std::cout << i << '\n';
    }
    


    return 0;
}