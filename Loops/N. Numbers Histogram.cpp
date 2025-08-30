#include<stdio.h>
int main()
{
    char c;
    int i,n,j,x;
    scanf("%c", &c);
    scanf("%d", &x);
        for(i=1; i<=x; i++)
    {
        scanf("%d", &n);
        for(j=0; j<n; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}