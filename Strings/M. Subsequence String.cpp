#include<stdio.h>
#include<string.h>
int main()
{
    char a[10001];
    char b[]="hello";
    int i=0, z=0;
    scanf("%s", &a);
    while(1)
    {
        if(i==strlen(a) || z==strlen(b))
        {
            break;
        }
        if(a[i]==b[z])
        {
            z++;
        }
        i++;
    }
    if(z==5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}