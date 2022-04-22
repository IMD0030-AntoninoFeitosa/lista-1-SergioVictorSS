#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std::size_t n )
{
    
  if(n > 0)
  {
  int max = V[0];
  int min = V[0];
  int iMax = 0;
  int iMin = 0;
   for(int i = 0;i<n;i++)
   {
     if(V[i] >= max)
     {
       max = V[i];
       iMax = i;
     }
     if (V[i] < min)
     {
       min = V[i];
       iMin = i;
     }
   }
  return {iMin,iMax};
  }
  return {-1,-1};
}
