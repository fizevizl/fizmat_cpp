#include <iostream>
#include <climits>
using namespace std;

const int n = 4;
int a[n][n]={{10,20,30,-5}, {20,1,60,-1}, {30,0,0,-7}, {-5,-1,-7,-9}};
int *pa[n]={a[0],a[1],a[2],a[3]};

main () 
{
    int i, j, y;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n; j++) printf("%d ", a[i][j]);
        printf("\n");
    }

    for (i=0;i<4;i++)
    {
        for (j=0;j<4; j++)
        {
            if (a[i][j] == 1)
            {
                for (y=0;y<4;y++)
                {
                    a[i][y] = 0; 
                }    
                break;
            }
        }
    }

    printf("\n");

    for (i=0;i<n;i++)
    {
        for (j=0;j<n; j++) printf("%d ", a[i][j]);
        printf("\n");
    }

    
}






