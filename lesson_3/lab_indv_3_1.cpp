#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i=2; // початкове значення параметру
    float b,E=0.001; // точність
    double S=0; // суматор
    
    do // початок чиклу
    {
        b = sin(log(i)/pow(i,3)); // наступний елемент суми
        S = S + b; // додаємо до суми
        i++; // наступне значення параметру
    }
    while (b > E); // поки не досягли точність обчисленя
    cout << S;

    return 0;
}