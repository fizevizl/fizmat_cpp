#include <iostream> 
using namespace std; 

int main() 
{
    int A,B,C,F;
    cout << "A | B | C | F " << endl; 
    for (A=0; A<2; A++)
     for (B=0; B<2; B++)
      for (C=0; C<2; C++)
        {
            F=(A && B)  !(B  C);
            cout << A<<" | "<< B <<" | "<< C <<" | "<< F << endl;  
        }

    return 0;
}