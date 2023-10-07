#include <iostream> 
using namespace std; 

int main() 
{
    int n=0; 
    cout << "n = "; cin >>n;
    int a1,ai,temp_max,temp_min;
    cout << "a1 = "; cin >>a1;
    temp_max=a1;
    temp_min=a1;
    
    for(int i=1; i<=n-1; i++) 
        {
            cout << "ai = "; cin >>ai;
            if (ai>temp_max) temp_max=ai;
            if (ai<temp_min) temp_min=ai;
        }
    cout << "Результат = " << temp_max-temp_min << endl; 
    
    return 0;
}