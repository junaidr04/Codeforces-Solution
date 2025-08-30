#include<stdio.h>
#include<string.h>
int main ()
{
    int n, x[26] = {0};
    char a;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &a);
        x[a - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
       for (int j = 0; j < x[i]; j++)
       {
           printf("%c", i + 97);
       }
    }
    return 0;
}