#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001], b[1001];
    scanf("%s%s", a,b);
    int r=strcmp(a,b);
    if(r<0)
    {
        printf("%s\n", a);
    }
    else if(r>0)
    {
        printf("%s\n", b);
    }
    else 
    {
        if(strlen(a) < strlen(b))
    {
        printf("%s\n", a);
    }
    else
    {
        printf("%s\n", b);
    }
    }
    return 0;
}