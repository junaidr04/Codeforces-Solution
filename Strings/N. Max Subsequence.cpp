#include<stdio.h>
#include<string.h>
int main (void)
{
    int n, cnt = 1, b = 0, c = 1;
    scanf("%d\n", &n);
    char a[n];
    gets(a);
    if (strlen(a) == 1)
        printf("%d\n", 1);
    else
    {
        for (int i = 0; i < n-1; i++)
        {
            if (a[i] != a[i+1])
                cnt++;
            else
            {
                c++;
            }

            if (b < cnt)
                b = cnt;
        }
        if (c == n)
            printf("%d\n", 0);
        else
            printf("%d\n", b);
    }
    return 0;
}