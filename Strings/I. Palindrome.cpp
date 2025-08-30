#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,s,f;
    
        char a[1000000];
        scanf("%s", a);
        s=strlen(a);
        f=0;
        for(i=0; i<=s/2; i++)
        {
            if(a[i] != a[s-1-i])
            {
                f=1;
                break;
            }
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