/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(int argc, char * argv[])
{
    int x;
    int qtd = 0;
    int qtdIntervalos [] = {0,0,0,0};
    int out = 0;
    while( cin >> std::ws >> x) {
        if(x >= 0 && x <= 25 ){
          qtdIntervalos[0]++;
        } else if (x >= 0 && x < 25 ) {
          qtdIntervalos[1]++;
        }else if (x >= 25 && x < 75 ) {
          qtdIntervalos[2]++;
        }else if (x >= 75 && x < 100 ) {
          qtdIntervalos[3]++;
        }else{
          out++;
        }
        qtd++;
    }
    for(int qtds : qtdIntervalos){
      std::cout << std::setprecision(4) << qtds/qtd*100 << "\n";
    }
        std::cout << std::setprecision(4) << out/qtd*100 << "\n";
    return 0;
}
