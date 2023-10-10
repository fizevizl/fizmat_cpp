#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int negativeCount = 0;

    cout << "Введіть три цілих числа (a, b, c): ";
    cin >> a >> b >> c;

    if (a < 0) {
        negativeCount++;
    }

    if (b < 0) {
        negativeCount++;
    }

    if (c < 0) {
        negativeCount++;
    }

    printf("Кількість від'ємних чисел серед a, b, c: %d ", negativeCount);

    return 0;
}
