#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,arr[100];
    cin>>n;
    arr[0]=1;

    for(i=1;i<=n;i++)
    {
       int sum=0;
        for(j=0;j<i;j++)
        {
          sum+=arr[j];
        }
        arr[i]=sum+1;
    }

    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
