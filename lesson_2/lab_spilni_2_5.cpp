#include <iostream>

int main() {
    double angle1, angle2;

    printf("Введіть величину першого кута: ");
    scanf("%lf", &angle1);

    printf("Введіть величину другого кута : ");
    scanf("%lf", &angle2);

    if (angle1 > 0 && angle2 > 0 && angle1 + angle2 < 180) {
        if (angle1 == 90 || angle2 == 90 || angle1 + angle2 == 90) {
            printf("Трикутник є прямокутним.\n");
        } else if (angle1 < 90 && angle2 < 90) {
            printf("Трикутник є гострокутним.\n");
        } else {
            printf("Трикутник є тупокутним.\n");
        }
    } else {
        printf("Введені кути не утворюють трикутника.\n");
    }

    return 0;
}
