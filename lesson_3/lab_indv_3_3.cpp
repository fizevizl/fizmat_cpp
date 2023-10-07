#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float S;
    float x[3]={-3.23, -0.73, 1.57}; // масив значень х
    printf("╔═════════╦══════════╗ \n");
    printf("║    x    ║    S     ║\n");
    printf("╠═════════╬══════════╣ \n");
    for (int j=0; j<3; j++) // запускаєм тричі
    {
        S=0;
        for (int i=0;i<=10;i++) // організовуємо обчислення
        {
            S = S + (1 / (2*i + 1)) * pow((x[j] - 1) / (x[j] + 1), i + 2); // знаходимо суму
        } 
        // cout <<"x = " << x[j] << " S = " << S << endl; // виводимо результат
        printf("║ %7.2f ║ %8.3f ║\n", x[j], S);
    }
    printf("╚═════════╩══════════╝ \n");
    return 0;
}