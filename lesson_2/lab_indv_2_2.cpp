#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x, y;
    cout << "x = "; cin >> x;
    if (x < 1)
        y = x - 10;
    else if (x >= 17)
        y = exp(2*x);
    else 
        y = 14 / x;     
    cout << "y = " << y; 
    return 0;
}