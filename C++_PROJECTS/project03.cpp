#include <iostream>
// PAGINA 3 = CONSTANTES. COMO TRANSFORMAR UMA VARIAVEL A NAO SER MUDADA. ALGO CONSTANTE NAO PODE TER O VALOR ALTERADO PARA NAO QUEBRAR.

/* exemplo a seguir, a formula do raio de uma circunferencia 
os valores que nao podem ser mudados sao o pi e o raio.
neste caso os valores irao usar o var CONST
*/

int main (){
    double pi = 3.14; // variavel nao constante.
    const double PI = 3.14159; //variavel constante que nao pode ser mudada. (MAIUSCULO PARA DIFERENCIAÇÃO)
    double raio = 10;
    const double RAIO = 15;
    double circ = 2 * PI * RAIO;

    std::cout << circ << "cm.";
}