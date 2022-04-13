#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{

    if(SD.y > P.y && SD.x > P.x && IE.y < P.y && IE.x < P.x )
      return location_t::INSIDE;
    
    if ((SD.y == P.y || IE.y  == P.y ) &&  SD.x > P.x &&   IE.x < P.x )
      return location_t::BORDER;
  
    if ((SD.x == P.x || IE.x  == P.x ) &&  SD.y > P.y &&  IE.y < P.y )
      return location_t::BORDER;
  
    return location_t::OUTSIDE;
}
