#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    long long s=0;
    cin>>n;
    char a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    s+=a[i] - '0';
    cout<<s;
    return 0;
}