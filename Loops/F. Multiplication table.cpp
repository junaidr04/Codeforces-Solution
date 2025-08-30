#include<stdio.h>
int main()
{
    int x,i,z;
    scanf("%d", &x);
    for(i=1; i<=12; i++)
    {
        z=i*x;
    printf("%d * %d = %d\n", x, i, z);
    }
   return 0;
}