#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,i,j;
    scanf("%d", &m);
    int a[m][m];
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    long long s1=0, s2=0;
     for(i=0; i<m; i++)
     {
         s1+=a[i][i];
         s2+=a[i][m-1-i];
     }
     printf("%lld", llabs(s1-s2));
       return 0;
}