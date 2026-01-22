#include <iostream>

int main (){

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "***** NUMBER GUESSING GAME *****\n";

    do{
        std::cout << "take a guess between (1-100): \n";
        std::cin >> guess;
        tries++;

        if (guess > num){
            std::cout << "Guess to high\n";
        } else if (guess < num){
            std::cout << "Guess to low\n";
        } else {
            std::cout << "You guessed it right!, your # of tries is: " << tries << '\n';
        }

    }while (guess != num);

    std::cout << "********************************************\n";


    return 0;
}