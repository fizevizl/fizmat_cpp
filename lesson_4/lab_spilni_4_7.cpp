#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int m[10] ={2,3,4,5,-7,-6,-4,5,6,9};

  bool flag=true; // для сортування методом "бульбашка"
  int temp;
  
  while (flag) // поки необхідно перевіряти
  {
      flag = false; // перевіряти не потрібно
      for (int i=0;i<9;i++) // переглядаємо можливі пари в масиві
        if (m[i]>m[i+1]) // якщо потрібно обміняти
        {
            flag = true; // потрібно перевіряти
            temp=m[i];
            m[i]=m[i+1]; // циклічний обмін
            m[i+1]=temp;
        }
  }
  temp=0;
  while (m[temp]<0) {temp++;} // шукаємо перший додатній елемент
  
    cout <<"summa = "<< m[temp-2]+m[temp-1]; // виводимо суму найбільших від'ємних елементів
  return 0;
}