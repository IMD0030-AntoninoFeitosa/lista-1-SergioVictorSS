#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
  int saida = 0;
  for(int i = 0; i<SIZE;i++){
    int x = 0;
    std::cin >> x;
    if(x<0){
      saida++;
    }
  }
  cout << saida;

    return 0;
}
