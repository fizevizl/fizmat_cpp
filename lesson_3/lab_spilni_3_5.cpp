#include <iostream>

using namespace std;

int main()
{   long long int k,mult=1;
    int a; // остання цифра числа
    cout << "k = "; cin >> k;
    while (k>0) // поки є цифри в числі
    {
        a = k % 10; // беремо останню цифру числа
        mult = mult * a; // знаходимо проміжний добуток
        k = k / 10; // позбавляємось останньої цифри числа
    }
    cout << "Добуток цифр = " << mult;

    return 0;
}