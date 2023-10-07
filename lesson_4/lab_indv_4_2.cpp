#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    const int rows = 15;
    const int cols = 3;
    float DR[rows][cols];
    float sum = 0;

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("num[%d][%d]=", i, j);
            cin >> DR[i][j];
            sum += DR[i][j];

        }
    }

    printf("sum dr[%d][%d] = %.3f ", rows, cols, sum);
    return 0;
}
