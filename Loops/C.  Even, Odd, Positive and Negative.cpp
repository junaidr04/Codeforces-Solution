#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int e=0, o=0, p=0, n=0;
    for(int i=1; i<=x; i++)
    {
        int m;
        cin>>m;
        if(m%2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
        if(m>0)
        {
            p++;
        }
        else if(m<0)
        {
            n++;
        }
    }
    cout<<"Even: "<<e<<"\n";
    cout<<"Odd: "<<o<<"\n";
    cout<<"Positive: "<<p<<"\n";
    cout<<"Negative: "<<n<<"\n";
    return 0;
}
