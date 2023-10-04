#include <iostream>
using namespace std;

int main()
{
    long long int k,h;
    cout << "k = ";
    cin >> k;
    k = k / 100;
    h = k % 10;
    cout << "h = " << h;
    return 0;
}