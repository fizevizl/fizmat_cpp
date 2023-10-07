#include <iostream> 
using namespace std; 

int main() 
{
    long int k,an,lich=0;
    cout << "k = " ; 
    cin >> k;
    an=k;
    while (an>=10) 
    {
        an = an / 10; 
    }
    
    while (k>0)
      {
          if (k%10 == an)
            lich++;
          k = k / 10;    
      }
    
    cout << "Цифра " << an << " зустрілась "<<lich<<" раз(и)(ів)";
    return 0;
}