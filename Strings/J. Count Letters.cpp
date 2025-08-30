#include <stdio.h>
#include <string.h>
char a[10000001];
int main ()
{
    int i, j, n, x[27] = {}, f;
    gets(a);
    n = strlen(a);
    for (i = 0; i < n; i++)
    {
        f = a[i];
        x[f - 97] += 1;
    }
    for (i = 0; i < 26; i++)
    {
        if (x[i] != 0)
            printf("%c : %d\n", (char) 97 + i,x[i]);
    }
    return 0;
}