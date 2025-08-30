#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1[n];
    int a2[n];
    for(int i=0; i<n; i++)
    {
        cin>>a1[i];
    }
    sort(a1, a1+n);
     for(int i=0; i<n; i++)
    {
        cin>>a2[i];
    }
    sort(a2, a2+n);
    int f=0;
    for(int i=0; i<n; i++)
    {
        if(a1[i] != a2[i])
           {
                f=1;
               break;
           }
    }
    if(f==0)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}