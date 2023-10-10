#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int side1, side2, angle;

    printf("Введіть довжину першої сторони: ");
    scanf("%d", &side1);

    printf("Введіть довжину другої сторони: ");
    scanf("%d", &side2);

    printf("Введіть величину кута між цими сторонами: ");
    scanf("%d", &angle);

    if (side1 > 0 && side2 > 0 && angle > 0 && angle < 180) {
        if (side1 == side2 && angle == 60) {
            printf("Трикутник є рівностороннім.\n");
        } else if (side1 == side2 || side1 == side2 || side2 == side1) {
            printf("Трикутник є рівнобедреним.\n");
        } else {
            printf("Трикутник є різностороннім.\n");
        }
    } else {
        printf("Введені дані не утворюють трикутника.\n");
    }

    return 0;
}
