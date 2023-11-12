#include <iostream>
#include <climits>
using namespace std;

const int n = 5;
int a[n][n]={{10,20,30,-5,45}, {20,50,60,-1,36}, {30,60,90,-7,73}, {-5,-1,-7,-9,49}, {45,36,73,49,69}};
int *pa[n]={a[0],a[1],a[2],a[3],a[4]};

main () 
{
    int i, j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    
    int t = 0; 

    for (int i = 0; i < n; ++i) 
    {
        for (int j = i + 1; j < n; ++j) 
        {
            if (pa[i][j] == pa[j][i]) 
            {
                t++; 
            }
        }
    }
    if (t == (n*n - n)/2)
        {
            printf("semetrichna");
        }
    else 
    {
        printf("ne semetrichna");
    }

printf("\n t = %d", t);
}

