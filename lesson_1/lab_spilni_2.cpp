#include <iostream>
using namespace std;

int main()
{
    int k,p;
    cout << "k = ";
    cin >> k;
    
    p = k % 10;
    k = k / 10;
    p = p*(k%10);
    k = k / 10;
    p = p*(k%10);
    k = k / 10;
    p = p*k;
    
    cout << "p = " << p;
    return 0;
}