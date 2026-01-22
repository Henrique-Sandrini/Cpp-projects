#include <iostream>
#include <vector>
//PARTE 5 TYPEDEF OU USING, FACILITADOR DO CÓDIGO, VC DA UM NOME A UM COMANDO EM ESPECIFICO

//typedef std::vector<std::pair<std::string, int>> pairlist_t; (este foi um exemplo dato de um código alem da compreensão atual)
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;


int main(){ // o pairlist_t é o codigo do typedef reduzino a um "apelido"

    //pairlist_t pairlist;
    text_t FirstName = "Nome";
    std::cout << FirstName << std::endl;
    number_t age = 12;
    std::cout << age << std::endl;


}