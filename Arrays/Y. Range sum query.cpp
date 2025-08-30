#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y;
    cin>>x>>y;
    long long a1[x], a2[x];
    for(int i=0; i<x; i++)
    {
        cin>>a1[i];
        if(i==0)
        {
            a2[i]=a1[i];
        }
        else
        {
            a2[i]=a1[i]+a2[i-1];
        }
    }
    while(y--)
    {
        long long s,v;
        cin>>s>>v;
        s--;
        v--;
        long long sum=a2[v]-a2[s]+a1[s];
        cout<<sum<<endl;
    }
    return 0;
}