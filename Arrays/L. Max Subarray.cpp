#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while (x--)
    {
        int y;
        cin>>y;
        int a[y];
        for (int i=0; i<y; i++)
        {
            cin>>a[i];
            cout<<a[i]<<" ";
        }
        int i=0, z=0, ma;
        while (true)
        {
            if(z==y-1)
            {
                break;
            }
            if(i==z)
            {
                ma=max(a[i], a[i+1]);
            }
            else
            {
                ma=max(ma, a[i+1]);
            }
            cout<<ma<<" ";
            i++;
            if(i==y-1)
            {
                z++;
                i=z;
            }
        }
        cout<<endl;
    }
    return 0;
}