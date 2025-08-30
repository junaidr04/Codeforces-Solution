#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int y;
        cin>>y;
        int a[y];
        int r=0;
        for(int i=0; i<y; i++)
        {
            cin>>a[i];
        }
        r=y;
        int z=0;
        int i=0;
        while(true)
        {
            if(z==y-1)
            {
                break;
            }
            if(a[i]>a[i+1])
            {
                z++;
                i=z;
                continue;
            }
            r++;
            i++;
            if(i==y-1)
            {
                z++;
                i=z;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}