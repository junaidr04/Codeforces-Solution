#include<stdio.h>
int main()
{
    int i,n,m,sum,minn,maxx;
    while(1)
    {
        scanf("%d %d", &n, &m);
        if(n<=0 || m<=0)
            break;
            minn=(n<m)?n:m;
            maxx=(n>m)?n:m;
            sum=0;
            for(i=minn; i<=maxx; i++)
            {
                printf("%d ", i);
                sum+=i;
            }
            printf("sum =%d\n", sum);
    }
     return 0;
}