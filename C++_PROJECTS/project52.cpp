#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
// uma funcao uma function que aceita diferentes tipos de informação. como ints,, double, chars
template <typename T, typename U>

auto max(T x, U y ){
    return (x > y) ? x : y; //AUTO - o compillador que decide como ira utilizar.
}                            // U - vem depois do T no alfabeto e pode utiizar outro valor na mesma funcao.                       
int main (){

    std::cout << max(1.95, 'A') << '\n'; // nesta funcao, posso colocar valores inteiros, doubles e chars. independentemente de sua declaração.
                                               // muito util  
    return 0;
}       