#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int count = 6;
    float sum = 0;
    float numbers[count];

    printf("Enter %d numbers \n", count);
    for (int i = 0; i < count; i++)
    {
        printf("num[%d] = ", i);
        cin >> numbers[i];
        if (numbers[i]>0)
        {
            sum += numbers[i];
        }
    }
    printf(" sum = %.3f", sum);
    return 0;
}