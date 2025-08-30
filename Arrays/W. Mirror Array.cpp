#include<stdio.h>
int main()
{
    int i,a,b,r=0,c;
    scanf("%d%d", &a,&b);
    while(a--)
    {
        int a[b];
    for(i=0; i<b; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=b-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    }
    return 0;
}