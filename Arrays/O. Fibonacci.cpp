#include<stdio.h>
int main()
{
    long long i,x,a=0,s=1,r;
    scanf("%lld", &x);
    if(x==1)
    {
        printf("%lld", a);
    }
    else if(x==2)
    {
        printf("%lld", s);
    }
    else
    {
        for(i=3; i<=x; i++)
        {
            r=a+s;
            a=s;
            s=r;
        }
        printf("%lld", s);
    }
    return 0;
}