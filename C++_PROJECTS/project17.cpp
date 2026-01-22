#include <iostream>

int main (){

    std::string name;
    std::cout << "Put your name: \n";
    std::getline(std::cin, name);

  if(name.length() > 12){ //name.length() vai verificar o tamanho da frase em ate x chars
        std::cout << "your name cant be over 12 chars\n";
   }    else {
            std::cout << "Welcome, " << name;
   }
    if (name.empty()){ //name.empty() verifica se o usuario adentrou algum valor.
        std::cout << "please put your name.\n";
    } else {
  std::cout << "Hello, " << name;
}

    name.clear(); //name.clear() vai esconder quaisquer informação dada pelo usuario.
    std::cout << "gello" << name;

    name.append("@gmail.com"); // name.append("o que deseja adicionar") adicioa a string o que foi declarado no ().
    std::cout << "your username is: " << name;

    std::cout << name.at(0); //name.at(0) ira mostrar o primeiro char digitado pelo usuario.

   name.insert(0, "@"); //name.intert(0, "o que deseja colocar na posição escolhida") insere uma frase a posição desejada.
    std::cout << name;


    std::cout << name.find(' '); //name.fin('o char que deseja achar') procura um char especifico 

    name.erase(0, 7);

    std::cout << name; //name.erase(0, 3) apaga o que estiver entre o char 0 e 3.
return 0;
}