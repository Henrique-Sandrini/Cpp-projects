#include <iostream>
//PARTE 4 - NAMESPACE, basicamente uma declaração antes da int main, para usar uma mesma variavel com diferentes valores 

namespace telao{
   int lanche = 12;
}
namespace telao_cozinha{
   int lanche = 10;
}
int main(){ // nesta parte ira mostrar o TELAO pois foi declarado, para mostrar a outra var, expecificar usando std::cout << telao_cozinha::x; 
    using namespace telao;
    std::cout << lanche;
    return 0;
}
//!!!!!! É POSSIVEL USAR PARA ENCURTAR VARIAVEIS : 
// exemplo, using std::cout;