#include <iostream>

using namespace std;

int main()
{
    int Mas[10]; // декларуємо масив
    long int Summa=0; // обнуляємо суматор
    
    for (int m=0;m<10;m++) // перебираємо всі можливі індекси елементів масиву
    {
        cout << "Mas["<<m<<"]="; // виводимо підказку
    cin >> Mas[m]; // вводимо елемент масиву з індексом m
    if (m>=2) // якщо вже можна обчислювати першу трійку і наступні
        Summa = Summa + Mas[m-2]*Mas[m-1]*Mas[m]; // знаходимо суму добутків
    } 
    cout << Summa; // виводимо результат

    return 0;
}