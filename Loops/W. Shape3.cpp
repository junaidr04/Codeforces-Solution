#include <stdio.h>
int main()
{
    int N, i, j;
    scanf("%d", &N);
    for(i = 1; i <= N; i++)
        {
        for(j = i; j < N; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
}
    for(i = N; i >= 1; i--)
        {
        for(j = i; j < N; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
            printf("\n");
    }
    return 0;
}