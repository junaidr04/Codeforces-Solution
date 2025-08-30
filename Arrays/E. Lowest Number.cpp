#include<stdio.h>
int main()
{
    int i,n,v,p=0;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
    scanf("%d", &a[i]);
    }
    v=a[0];
    p=1;
    for(i=0; i<n; i++)
    {
        if(a[i]<v)
        {
        v=a[i];
        p=i+1;
        }
    }
    printf("%d %d\n", v,p);
    return 0;
}