#include <iostream>
using namespace std;

int main() {
    
    int a, b, c, maxPrice, minPrice, totalCost;
    cout << "Введіть ціну першого товару: ";
    cin >> a;
    cout << "Введіть ціну другого товару: ";
    cin >> b;
    cout << "Введіть ціну третього товару: ";
    cin >> c;

    maxPrice = max(max(a, b), c);
    minPrice = min(min(a, b), c);

    totalCost = maxPrice + min(a + b + c - maxPrice - minPrice, minPrice);

    cout << "Вартість покупки: " << totalCost << endl;

    return 0;
}
