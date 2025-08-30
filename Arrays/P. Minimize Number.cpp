#include<stdio.h>
int main()
{
    int i,n,r=0,c;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        c=0;
        if(a[i] % 2 != 0)
        {
            printf("0");
            return 0;
        }
        while(a[i] % 2 == 0)
        {
            c++;
            a[i] /= 2;
        }
        if(i==0 || c<r)
            {
                r=c;
            }
    }
    printf("%d", r);
    return 0;
}