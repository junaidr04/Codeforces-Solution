#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cin>>c;
    long long f = 1;
    while(c--)
    {
        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            f *= i;
        }
        cout<<f<<endl;
        f = 1;
    }
    return 0;
}