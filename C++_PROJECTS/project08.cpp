#include <iostream>
//PARTE 8 VALORES COLOCADOS POR UM USER

int main(){

    std::string  name;
    int age;

    std::cout << "What's your full name?: ";

    //std::cin >> name; //neste caso o output nao aceitara espacos
    std::getline(std::cin >> std::ws, name); // o comando GETLINE Permite que o usuario utilize espacos, EXTREMAMENTE IMPORTANTE!!!!!
    //o WS é pra prevenir o WHITE SPACES e dar erro no código.
    std::cout << "What's your age?: ";

    std::cin >> age;

    std::cout << "Hello, " << name << ", your age is: " << age;




    return 0;
}