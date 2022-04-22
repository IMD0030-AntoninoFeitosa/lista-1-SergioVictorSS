/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
    int iex,iey,sdx,sdy,px,py;
     while( cin >> std::ws >> iex >> iey >> sdx >> sdy >> px >> py ) {
       if(iex == sdx && iey == sdy)
       {
         cout << "ivalid\n";
       }
       else
       {
         Ponto IE, SD,P;
         if(iex > sdx )
         {
           iex, sdx = sdx,iex;
          }
         if(iey > sdx){
           iey, sdy = sdy,iey;
         }
         IE = {iex,iey};
         SD = {sdx,sdy};
         P = {px,py};
         int retorno = pt_in_rect(IE,SD,P);
         switch (retorno){
           case location_t::INSIDE:
              cout << "inside\n";
              break;
           case location_t::OUTSIDE:
              cout << "outside\n";
              break;  
           case location_t::BORDER:
              cout << "border\n";
         }
         
       }
  }

    return 0;
}
