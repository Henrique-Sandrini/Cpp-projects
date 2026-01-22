#include <iostream>

void happybirthday (std::string name, int age);

int main (){

    std::string name = "Lorem";
    int age = 19;
    happybirthday(name, age);


    return 0;
}

void happybirthday (std::string name, int idade){
    std::cout << "Happy Birthday to " << name <<'\n';
    std::cout << "Happy Birthday to " << name <<'\n';
    std::cout << "Happy Birthday dear " <<name << '\n';
    std::cout << "Happy Birthday to " << name <<'\n';
    std::cout << "You are " << idade <<" years old\n";


}
