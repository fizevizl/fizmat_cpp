#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i=1;
    float b,E=0.001;
    double S=0;

    do 
    {
        b = 1 / (pow(i, 2) + pow(sin(i), 2)); 
        S = S + b; 
        i++; 
    }
    while (b > E); 
    cout << "S = " << S;

    return 0;

}