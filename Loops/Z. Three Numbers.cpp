#include <stdio.h>
int main()
{
    int K, S, X, Y, Z, count = 0;
    scanf("%d %d", &K, &S);
    for ( X = 0; X <= K; X++)
    {
        for ( Y = 0; Y <= K; Y++)
        {
             Z = S - X - Y;
            if (Z >= 0 && Z <= K)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}