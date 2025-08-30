#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i;
    cin>>x>>y;
    int a[y+1];
    for(int i=1; i<=y; i++)
    {
        a[i]=0;
    }
    for(int i=1; i<=x; i++)
    {
        int n;
        cin>>n;
        a[n]++;
    }
    for(int i=1; i<=y; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}