#include <iostream>
#include <ctime>

int main (){

    srand(time(0));

    int randNum = (rand() % 5) + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "voce ganhou um Videogame!\n";
        break;
    case 2:
        std::cout << "voce ganhou um Pc!\n";
        break;
    case 3:
        std::cout << "voce ganhou um controle!\n";
        break;
    case 4:
        std::cout << "voce ganhou uma Televisao!\n";
        break;
    case 5:
        std::cout << "voce ganhou um Microfone!\n";
        break;
            
    default:
        break;
    }

    return 0;
}