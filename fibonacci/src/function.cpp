#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
  std::vector<unsigned int> f;
  if(n > 1 ){
  f.push_back(1);
  f.push_back(1);
  unsigned int ctd = 2;
    
  while(true){
    unsigned int prox = f[ctd-1]+f[ctd-2];
    if(prox >= n){
      return f;
    }
    f.push_back(prox);
    ctd++;
  }
}
  return f;
  }
