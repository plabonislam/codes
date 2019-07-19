
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,arr[50000],min=1000,d;
    cin>>m;
    for(i=0;i<m;i++)
        cin>>arr[i];

    sort(arr,arr+m);
    for(i=0;i<m;i++)
        cout<<arr[i]<<" ";
}
