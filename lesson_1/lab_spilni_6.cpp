#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int k,h,m;
    
    cout << "k = ";
    cin>>k; 
    h = k / 3600;
    k = k - h*3600;
    m = k / 60;
    k = k - m*60;
    
    cout << "h = " << h << " m = "<< m << " k = " << k;
    return 0;
}