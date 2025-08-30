#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    char a[101][101];
    for(int i=1; i<=x; i++)
    {
        for (int j=1; j<=y; j++)
        {
            cin>>a[i][j];
        }
    }
    int r1, c1;
    cin>>r1>>c1;
    if((a[r1][c1+1] != '.') &&
    (a[r1][c1-1] != '.') &&
    (a[r1+1][c1] != '.') &&
    (a[r1-1][c1] != '.') &&
    (a[r1+1][c1+1] != '.') &&
    (a[r1+1][c1-1] != '.') &&
    (a[r1-1][c1+1] != '.') &&
    (a[r1-1][c1-1] != '.'))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}