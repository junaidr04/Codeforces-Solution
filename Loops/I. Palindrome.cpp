#include<stdio.h>
int main()
{
    int x,y=0,r,a;
    scanf("%d", &x);
    a=x;
    while(x>0)
    {
        r=x%10;
        y=y*10+r;
        x/=10;
    }
    if(a==y)
    {
        printf("%d\n", y);
        printf("YES");
    }
    else
    {
        printf("%d\n", y);
        printf("NO");
    }
    return 0;
}