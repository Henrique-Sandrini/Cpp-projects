#include <iostream>

int main (){
//USADO QUANDO PRECISA DE UM LOOP PARA UMA QUANTIDADE ESPECIFICA. NAO INFINITAMENTE IGUAL O WHILE.
    for(int i = 0; i <= 30; i+= 3){ //um loop que ENQUANTO a condição for falsa ele vai continuar, se a condiçãaao for verdadeira ele escapa o loop
        std::cout << i << '\n';   
    }
    std::cout << "Lorem Ipsum\n";
    return 0;
}