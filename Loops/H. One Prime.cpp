#include<stdio.h>
int main()
{
    int i,n,f;
    scanf("%d", &n);
    f=0;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
            f++;
    }
    if(f==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}