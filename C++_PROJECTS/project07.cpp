#include <iostream>
//PARTE 7, DATA TYPE IMPLICIT AUTOMATIC, EXPLICT (INT)

int main(){
    //double x = (int) 3.14;
    //std::cout <<x;

    //char x = 100;
    //std::cout << (char) 100;


    int correct = 8; //neste caso nao estava funcionando pois a var "questions" era de valor int, e precisava ser double.
    int questions = 10;
    double score = correct/(double)questions * 100;
    std::cout << score << "%";


    return 0;
} 