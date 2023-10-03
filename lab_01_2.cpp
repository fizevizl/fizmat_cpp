#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float h, r, result;
    cout << "h = "; cin >> h;
    cout << "r = "; cin >> r;
    result = M_PI * pow(r, 2) * h;
    cout << result; 
    return 0;
}