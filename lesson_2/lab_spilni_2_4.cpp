#include <iostream>

using namespace std;

int main() {
    int number;
    printf("Введіть тризначне число: ");
    cin >> number;

    if (number >= 100 && number <= 999) { 
        int digit1 = number / 100;        
        int digit2 = (number / 10) % 10;  
        int digit3 = number % 10;         

        int product = digit1 * digit2 * digit3;

        if (product % 2 == 0) {
            printf("Добуток цифр є парним числом: %d", product);
        } else {
            printf("Добуток цифр є непарним числом: %d", product);
        }
    } else {
        printf("Введене число не є тризначним: %d", number);
    }

    return 0;
}
