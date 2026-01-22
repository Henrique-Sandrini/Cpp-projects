#include <iostream>
//operadores lógicos
int main(){
/*
&& -> checa se duas condições sao verdadeiras. e
|| -> checa se pelo menos uma das condiçõees sao verdadeiras. ou
! -> reverte o estado da operação lógica
*/

int temp;
bool sunny = true;
/*
std::cout << "enter the temperature: \n";
std::cin >> temp;

if (temp > 0 && temp <30){
    std::cout << "the temperature is good ";
}else{
    std::cout << "the temperature isn't good";
}
*/
std::cout << "enter the temperature: \n";
std::cin >> temp;

if (temp <= 0 || temp >=30){
    std::cout << "the temperature is bad ";
}else{
    std::cout << "the temperature is good";
}    
if (!sunny){
    std::cout << "its sunny outside";
}else{
    std::cout << "its cloudy outside";
}

return 0;
}