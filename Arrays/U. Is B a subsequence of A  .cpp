#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    long long a1[x], a2[y];
    for(int i=0; i<x; i++)
    {
        cin>>a1[i];
    }
    for(int j=0; j<y; j++)
    {
        cin>>a2[j];
    }
    int c=0, z=0;
    for(int i=0; i<x; i++)
    {
        if(a1[i]==a2[z])
        {
            c++;
            z++;
        }
    }
    if(c==y)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}