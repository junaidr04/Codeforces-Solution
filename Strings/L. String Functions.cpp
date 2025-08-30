#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    string value;
    cin>>value;
    string n;
    int s1,s2;
    while(y--)
    {
        cin>>n;
        if(n == "pop_back")
        {
            value.pop_back();
        }

        else if(n=="front")
        {
            cout<<value.front()<<endl;
        }
        else if(n=="back")
        {
            cout<<value.back()<<endl;
        }
        else if(n=="sort")
        {
            cin>>s1>>s2;
            sort(value.begin()+ min(s1,s2)-1, value.begin()+ max(s1,s2));
        }
        else if(n=="reverse")
        {
            cin>>s1>>s2;
            reverse(value.begin()+ min(s1,s2)-1, value.begin()+ max(s1,s2));
        }
        else if(n=="print")
        {
            int pos;
            cin>>pos;
            cout<<value[pos-1]<<endl;
        }
        else if(n=="substr")
        {
            cin>>s1>>s2;
            for(int i=min(s1,s2)-1; i<max(s1,s2); i++)
            {
                cout<<value[i];
            }
            cout<<endl;
        }
        else
        {
            char c;
            cin>>c;
            value.push_back(c);
        }
    }
    return 0;
}