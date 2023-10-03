#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n = n / 100;
    int p = n % 10;
    cout << p;
    return 0;
}