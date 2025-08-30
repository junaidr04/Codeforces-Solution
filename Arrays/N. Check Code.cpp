#include<stdio.h>
int main()
{
    int a,b,i,f=1;
    char s[22];
    scanf("%d %d %s", &a, &b, s);
    if(s[a] != '-')
    {
        f=0;
    }
    else
    {
        for(i=0; i<a+b+1; i++)
        {
            if(i != a)
            {
                if(s[i]<'0' || s[i]>'9')
                {
                    f=0;
                    break;
                }
            }
        }
    }
    if(f)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}