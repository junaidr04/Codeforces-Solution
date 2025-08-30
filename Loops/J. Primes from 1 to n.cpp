#include <stdio.h>
int main()
{
    int i, j, x, y;
    scanf("%d", &x);
    for(i=2; i<=x; i++)
    {
        y = 1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                y = 0;
                break;
            }
        }
        if(y==1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}