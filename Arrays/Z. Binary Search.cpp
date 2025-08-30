#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin>>N>>Q;
    int A[N];
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    sort(A, A + N);
    for(int i=0; i<Q; i++)
    {
        int X;
        cin>>X;
        int start=0, end=N-1;
        bool found=false;
        while(start <= end)
        {
            int mid=start+(end-start)/2;
            if(A[mid] == X)
            {
                found=true;
                break;
            }
            else if(X>A[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        if(found)
            cout<<"found\n";
        else
            cout<<"not found\n";
    }
    return 0;
}