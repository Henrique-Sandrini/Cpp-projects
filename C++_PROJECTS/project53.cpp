#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
//STRUCT = estruturas parecidas com arrays[] que guardam a informação de diferentes variaveis. int, double, char, bool.

struct students{
    std::string name;
    double gpa;
    bool enrolled;  
};


int main (){
//  declara a variavel students: MAIS o nome de estudante1.
//                              utiliza-se os dados colocados na struct acima
//                              bom para poupar códigos.
    students estudante1; 
    estudante1.name = "Lorem";
    estudante1.gpa = 1.1;
    estudante1.enrolled = true;

    std::cout << estudante1.name << '\n';
    std::cout << estudante1.gpa << '\n';
    std::cout << estudante1.enrolled << '\n';

    return 0;
}