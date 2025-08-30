#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,s,f;
    scanf("%d", &n);
    while (n--)
    {
        char a[1000000];
        scanf("%s", a);
        s=strlen(a);
        f=0;
        for(i=0; i<s-2; i++)
        {
            if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='0' || a[i]=='1' && a[i+1]=='0' && a[i+2]=='1')
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }
    return 0;
}