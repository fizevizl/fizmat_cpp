#include <iostream>
using namespace std;

int main()
{
    int k,r=0;
    cout << "k = ";
    cin >> k;
    
    r = r - k%10;
    k = k / 100;
    r = r - k%10;
    k = k / 100;
    r = r - k%10;
    
    cout << "r = " << r;
    return 0;
}