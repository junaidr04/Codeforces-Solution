#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int r=0;
    for(int i=0; i<a.size(); i++)
    {
        int x=a[i] - '0';
        r+=x;
    }
    cout<<r<< endl;
    return 0;
}