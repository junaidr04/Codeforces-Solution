#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int min=a[0], max=a[0], MIN=0, MAX=0;
    for(int i=0; i<n; i++)
    {
        if(min>a[i])
        {
            min=a[i];
            MIN=i;
        }
      if(max<a[i])
        {
            max=a[i];
            MAX=i;
        }
    }
    a[MAX]=min;
    a[MIN]=max;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}