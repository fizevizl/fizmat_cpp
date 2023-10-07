#include <iostream>
#include <cmath>

using namespace std;

int main()
{   bool flag; // true - число просте
    int t,k=1;
    long int summa; 
    cout << "t = "; cin >> t; // поточне число
    while (t != 0) // поки введене число не 0
    {
        flag = true; // нехай число просте
        for(int i=2;i<=sqrt(k);i++) // перебір чисел що є кандидатами на дільник
          if (k%i == 0) // якщо дільник
            flag = false; // то число не просте
        if (k==1) flag = false; // окремий випадок дял 1
        if (flag) // число к - просте
          summa = summa + t; 
        cout << "t = "; cin >> t; // поточне число
        k++; // збільшуємо лічильник порядкових номерів почлідовності чисел
    }
    cout << "Сума = " << summa;

    return 0;
}