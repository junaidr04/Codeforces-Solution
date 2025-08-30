#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,f;
    cin>>m>>n;
    int a[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    f=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]==x)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    {
        cout<<"will not take number"<<endl;
    }
    else
    {
        cout<<"will take number"<<endl;
    }
    return 0;
}