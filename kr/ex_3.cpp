#include <iostream>
#include <string>
using namespace std;


int countDigits(int number, int digit) 
{
    int count;

    string numStr = to_string(number);

    count = 0;
    for (char ch : numStr) {
        if (ch - '0' == digit) {
            count++;
        }
    }

    return count;
}

int main() 
{
    int N, a;
    cout << "Введіть 32-розрядне число N: ";
    cin >> N;

    cout << "Введіть цифру a: ";
    cin >> a;

    int result = countDigits(N, a);

    cout << "Кількість цифр " << a << " в числі " << N << ": " << result << endl;

    return 0;
}
