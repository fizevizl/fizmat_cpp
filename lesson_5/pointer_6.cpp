#include <iostream>
#include <climits>
using namespace std;

int a[4][4]={{10,20,30,-5}, {40,50,60,-1}, {70,80,90,-7}, {30,50,80,-9}};
int *pa[4]={a[0],a[1],a[2],a[3]};
 

main ()
{
    int i, j;
    for (i=0;i<4;i++)
    {
        for (j=0;j<4; j++) printf("%d ", a[i][j]);
        printf("\n");
    }

    int mx = pa[0][0];
    int mn = pa[0][0];
    int max_x = 0;
    int max_y = 0;
    int min_x = 0;
    int min_y = 0;


    for (i=0;i<4;i++)
    {
        for (j=0;j<4; j++)
        {
            if (mx < pa[i][j]) 
            {
                mx = pa[i][j];
                max_x = i;
                max_y = j;
            }
            if (mn > pa[i][j]) 
            {
                mn = pa[i][j];
                min_x = i;
                min_y = j;
            }
        }
}
printf("min_x = %d, min_y = %d \n", min_x+1, min_y+1);
printf("max_x = %d, max_y = %d \n", max_x+1, max_y+1);
printf("max = %d, min = %d \n", mx, mn);
pa[min_x][min_y] = mx;
pa[max_x][max_y] = mn;

for (i=0;i<4;i++)
{
    for (j=0;j<4; j++) printf("%d ", a[i][j]);
    printf("\n");
}
}
