#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int c=0, min=a[0];
    for(i=0; i<n; i++)
    {
        if(min==a[i])
           {
            c++;
           }
    if(min>a[i])
    {
        min=a[i];
        c=1;
    }
    }
    if(c%2==0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }
return 0;
}