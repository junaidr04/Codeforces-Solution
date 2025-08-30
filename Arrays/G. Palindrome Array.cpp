#include <stdio.h>
int main()
{
    int i,s, f = 0;
    scanf("%d", &s);
    int arr[s];
    for ( i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i <= s / 2; i++)
    {
        if (arr[i] != arr[s - 1 - i])
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}