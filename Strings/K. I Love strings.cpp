#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    scanf("%d", &x);
    while(x--)
    {
        char v1[100], v2[200];
        scanf("%s%s", &v1, &v2);
        int s1=strlen(v1);
        int s2=strlen(v2);
        int s=s1+s2;
        int f1=1, f2=1;
        for(int i=0; i<s; i++)
        {
            if(s1 != i && f1)
            {
                printf("%c", v1[i]);
            }
            else
            {
                f1=0;
            }
            if(s2 != i && f2)
            {
                printf("%c", v2[i]);
            }
            else
            {
                f2=0;
            }
        }
        printf("\n");
    }
    return 0;
}