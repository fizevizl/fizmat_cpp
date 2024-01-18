#include <iostream>
using namespace std;

int main() {
    
    int N, days, hours, minutes, seconds;
    printf("Введіть кількість секунд до Нового Року: ");
    cin >> N;

    days = N / (24 * 3600);
    hours = (N % (24 * 3600)) / 3600;
    minutes = (N % 3600) / 60;
    seconds = N % 60;

    cout << "Днів: " << days << " Годин: " << hours << " Хвилин: " << minutes << " Секунд: " << seconds << endl;

    return 0;
}
