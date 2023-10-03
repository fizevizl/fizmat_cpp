#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x, y, p;
    cout << "x = "; cin >> x;
    if (x >= 0)
       p = 1 - 2*x;
    else
       p = x + 1;

    if (p != 2)
       y = 1 / pow(p-2, 2);
    else
       y = 2*sin(p);    
    cout << "p = " << p << "\n";
    cout << "y = " << y; 
    return 0;
}