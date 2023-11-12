#include <iostream>

using namespace std;

int main()
{
    char S[70]; // максимальна кількість символів
    cin.getline(S,70); // вводимо рядок символів

    for (int i=69;i>=0;i--) // перебираємо індекси елементів масиву символів
        cout<<S[i]; // виводимо символ з індексом i

    return 0;
}