#include <iostream>
#include <cmath>

int main() {
    int n;
    printf("ввидіть початкове значення n:");
    scanf("%d", &n);
    bool foundNegative = false;

    while (true) {
        float cotangent = 1.0 / tan(n);
        float cosine = cos(cotangent);

        if (cosine < 0) {
            foundNegative = true;
            printf("Перший від'ємний член при n = %d: %.6f\n", n, cosine);
            break;
        }

        n++;
    }

    return 0;
}
