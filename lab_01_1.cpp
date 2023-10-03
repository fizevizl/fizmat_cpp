#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x = 9.86;
    float a = 0.24;
    float result;
    result = pow(sin(x) + cos(3*x), 2) / log(2*(x+a)) - sqrt(x);
    cout << result; 
    return 0;
}