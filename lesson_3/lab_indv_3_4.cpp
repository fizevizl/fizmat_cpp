#include <iostream>
#include <cmath>

int main()
{
    
    float y;
    printf("╔═════════╦══════════╗ \n");
    printf("║    x    ║    y     ║\n");
    printf("╠═════════╬══════════╣ \n");
    for (float x = -3.14; x <= 2; x += 0.3)
    {
        y = exp(x) * pow(sin(x), 3);  
        printf("║ %5.2f   ║ %7.3f  ║\n", x, y);
    }

    printf("╚═════════╩══════════╝ \n");
    return 0;
}