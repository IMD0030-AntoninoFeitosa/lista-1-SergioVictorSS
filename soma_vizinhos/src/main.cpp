/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
#include <cmath>  
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int x, y = 0;
    while( cin >> std::ws >> x >> y) {   
        y = x + y - (y == 0 ? 0 : y/abs(y));
        cout << (x + y) * ((x > y ? x - y : y - x) + 1) / 2<< '\n';
    }

    return 0;
}
