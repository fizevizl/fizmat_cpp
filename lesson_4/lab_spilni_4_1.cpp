#include <iostream>

using namespace std;

int main()
{
    int Mas[10]; 
    long int Product=1;
    
    for (int m=0;m<10;m++)
    {
        cout << "Mas["<<m<<"]=";
    cin >> Mas[m];
         if (Mas[m] !=0 ) Product *= Mas[m]; 
    } 
    cout << Product;

    return 0;
}