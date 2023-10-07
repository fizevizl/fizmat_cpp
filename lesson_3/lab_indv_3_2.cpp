#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    float y;
    printf("╔═════════╦══════════╗ \n");
    printf("║    x    ║    y     ║\n");
    printf("╠═════════╬══════════╣ \n");
    for (float x = 1.5; x <= 4; x += 0.5)
    {
        y = log((pow(x, 2) + 4) / (x - 1)); 
        printf("║ %5.2f   ║ %7.3f  ║\n", x, y);
    }

    printf("╚═════════╩══════════╝ \n");
    return 0;
}
