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
        for(int j=0; j<y; j++)
        {
            cin>>a[j];
        }
        int ans=INT_MAX;
        for(int j=0; j<y; j++)
        {
            for(int z=j+1; z<y; z++)
            {
                int c=a[j]+a[z]+z-j;
                ans=min(c,ans);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}