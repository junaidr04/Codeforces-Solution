#include<stdio.h>
int main()
{
    int i,n;
    long long x;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%lld", &x);
        if(x==0)
        {
            printf("0\n");
            continue;
        }
        while(x>0)
        {
            printf("%lld ", x%10);
            x/=10;
        }
        printf("\n");
    }
    return 0;
}