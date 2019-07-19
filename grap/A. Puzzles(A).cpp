#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,arr[50000],min=1000,d;
    cin>>n>>m;
    for(i=1;i<=m;i++)
        cin>>arr[i];

    sort(arr,arr+m+1);

for(i=1;i<=m-n+1;i++)
{
    d=arr[i+n-1]-arr[i];
   // cout<<d<<endl;
    if(d<min)
        min=d;

}
cout<<min;

}
