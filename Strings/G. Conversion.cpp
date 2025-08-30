#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000];
    scanf("%s", a);
    for(int i=0; i<strlen(a); i++)
        {
            if(a[i]== ',')
    {
        printf(" ");
    }
    else if(a[i] >= 'a' && a[i] <= 'z')
    {
        printf("%c", a[i]-32);
    }
    else
    {
        printf("%c",  a[i]+32);
    }
        }
    return 0;
}