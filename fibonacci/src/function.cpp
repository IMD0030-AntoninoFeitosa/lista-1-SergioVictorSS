#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
  std::vector<unsigned int> f;
  if(n > 1 ){
  f.push_back(1);
  f.push_back(1);
  for(int i = 2; i < n; i ++){
      f.push_back(f[i-1]+f[i-2]);
    }
  }
    return f;
}
