#include<stdio.h>
int main()
{
    int a,b,x,y,t,sum;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d%d", &x,&y);
        a=x<y ? x:y;
        b=x>y ? x:y;
        sum=0;
        for(int j=a+1; j<b; j++)
        {
            if(j%2!=0 && b-a!=1)
            {
              sum+=j;
            }
        }
        printf("%d\n", sum);
    }
     return 0;
}