#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s); 
    int n=s.length();
    for(int i=0; i<n; i++)
    {
        if(i==n-1 || s[i+1] == ' ')   
        {
            for(int j=i; j>=0 && s[j] != ' '; j--)
            {
                cout<<s[j];
            }
            if(i != n-1) 
                cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}