#include <iostream> 
using namespace std;

int main() 
{
    int k,m,p=0;
    cout << "k = " ; 
    cin >> k;
    m=k;
    while (m>0) 
    {
        p = p*10+(m%10); 
        m /= 10; 
    }
    if (p==k)
       cout << "так"; 
    else 
       cout << "ні";
    return 0;
}