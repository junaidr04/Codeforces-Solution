#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,f;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    f=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==m)
        {
            cout<<i<<endl;
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}