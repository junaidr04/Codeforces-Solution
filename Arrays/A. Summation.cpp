#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    long long a[n],s=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    cout<<abs(s)<<endl;
    return 0;
}