#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c;
    float t;
    
    cin>>a>>b>>c; 
    t = pow(a*b*c, 1./3.); 
    
    cout << "дробова частина = " << t - floor(t); 
    return 0;
}