#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < n - 1; i++)
    {
        int x, f = 0, j;
        int v = a[i];
        for ( j = i + 1; j < n; j++)
        {
            if (a[j] < v)
            {
                x = j;
                v = a[j];
                f = 1;
            }
        }
        if (f == 1)
        {
            int temp = a[i];
            a[i] = v;
            a[x] = temp;
        }
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}