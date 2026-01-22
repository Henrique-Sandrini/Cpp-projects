#include <iostream>
#include <cmath>
//PROJETO 12 
enum notas {MB = 0, B = 1, R = 2 , I = 3};

int main(){

    int mes;
    std::cout << "Coloque o mês, de 1 a 12: ";
    std::cin >> mes;

    switch(mes){
        case 1:
            std::cout << "JANEIRO";
                break;
        case 2:
            std::cout << "FEVEREIRO";
                break;
        case 3:
            std::cout << "MARÇO";
                break;
        case 4:
            std::cout << "ABRIL";
                break;
        case 5:
            std::cout << "MAIO";
                break;
        case 6:
            std::cout << "JUNHO";
                break;
        case 7:
            std::cout << "JULHO";
                break;
        case 8:
            std::cout << "AGOSTO";
                break;
        case 9:
            std::cout << "SETEMBRO";
                break;
        case 10:
            std::cout << "OUTUBRO";
                break;
        case 11:
            std::cout << "NOVEMBRO";
                break;
        case 12:
            std::cout << "DEZEMBRO";
                break;
        default:
            break;
        std::cout << "coloque o numero certo";
    }

       notas nota;
       std::cout << "digite sua nota (I, R, B, MB)";
       std::cin >> nota;

       switch(nota){
       case 0:
            std::cout << "Você foi mal, recuperação.";
                break;
       case 1:
            std::cout << "Você foi regular.";
                break;
        case 2:
            std::cout << "Voce foi bem.";
                break;
        case 3:
            std::cout << "Voce foi muito bem.";
                break;
       default:
            std::cout << "Por favor digite corretamente";
                break;
       }













    return 0;
}