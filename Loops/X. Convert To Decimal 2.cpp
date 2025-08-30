#include<stdio.h>
#include<math.h>
int main() 
{
    int T, x, r, cnt, temp, s;
    scanf("%d", &T); 
    while (T--) 
        {
        scanf("%d", &x); 
        cnt = 0;  
        temp = x; 
        while (temp > 0) 
            {
            r = temp % 2;  
            if (r == 1) 
            {
                cnt++; 
            }
            temp /= 2;
        }
        s = pow(2, cnt) - 1;
        printf("%d\n", s); 
    }
    return 0;
}