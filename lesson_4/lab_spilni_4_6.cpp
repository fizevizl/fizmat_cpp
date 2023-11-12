// lab4 spilne 6
#include <iostream>
#include <cstring> 
#include <cmath>
using namespace std;

int main()
{
  string s; // Початкові символи

  cout << "Input string:";
  getline(cin,s); // отримуємо рядок
  
    int n; // число
    n = stoi(s); // переводимо з рядка в число
    
    int p7=0, p9=0, i=0;
    while (n>0)
      {
          p7 = p7 + (n%10)*pow(7,i); // збираємо число з основою 7
          p9 = p9 + (n%10)*pow(9,i); // збираємо число з основою 9
          n = n / 10; i++;
      }
    cout << "7th - " <<p7<<" 9th - "<<p9<<endl;
    if (p7%2==0) cout <<"7th parne"<<endl; else cout <<"7th neparne";
    if (p9%2==0) cout <<"9th parne"<<endl; else cout <<"9th neparne";

  return 0;
}