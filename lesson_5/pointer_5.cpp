#include <iostream>
#include <climits>
using namespace std;

const int n = 5;
int a[n][n]={{10,20,30,-5,0}, {20,0,60,-1,0}, {30,0,0,-7,5}, {-5,-1,-7,-9,0}, {45,36,73,49,0}};
int *pa[n]={a[0],a[1],a[2],a[3],a[4]};

main () 
{
    int i, j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n; j++) printf("%d ", a[i][j]);
        printf("\n");
    }

    for (i=0;i<n;i++)
    {
        for (j=n-1;j>=0; j--)
        {
            if (pa[i][j] == 0 )
            {
             pa[i][j] = 5;   
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