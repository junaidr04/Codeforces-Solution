#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,max,min,m;
    cin>>x>>y;
    if(x>=y)
    {
        max=x;
        min=y;
    }
    else
    {
        min=x;
        max=y;
    }
    for(i=1; i<=max; i++)
    {
        if(x%i==0 && y%i==0)
        {
            m=i;
        }
    }
    cout<<m<<endl;
    return 0;
}