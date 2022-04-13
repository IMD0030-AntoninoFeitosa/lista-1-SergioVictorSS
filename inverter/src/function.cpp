#include <iostream>
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    std::array<std::string,SIZE> invertido;
  for(int i = SIZE; i>0;i--)
  {
    invertido[SIZE-i] = arr[i-1];
  }
  arr  = invertido;
}
