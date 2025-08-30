#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]<=10)
        {
            cout<<"A["<<i<<"] = "<<a[i]<<endl;
        }
    }
    cout<<"\n";
    return 0;
}