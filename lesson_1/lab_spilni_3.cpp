#include <iostream>
using namespace std;

int main()
{
    int k,p,a,b,c;
    cout << "k = ";
    cin >> k;
    
    c = k % 10;
    k = k / 10;
    b = k % 10;
    a = k / 10;
    p = (c*10+b)*10+a;
    
    cout << "p = " << p;
    return 0;
}