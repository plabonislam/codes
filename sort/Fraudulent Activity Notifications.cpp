#include<bits/stdc++.h>
using namespace std;
pair<int,int>mp[300000];
int main()
{
    int arr[300000],n,t,m;
    double f;
    cin>>n>>t;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
mp[i]=make_pair(i,arr[i]);
    }
    int loop=n-t;
    int count=0;
    int k=t;
    m=t/2;
    sort(arr,arr+n);
    for(int i=0; i<n-t; i++)
    {
        k=m+i;
        //  cout<<k<<endl;
        if(t%2==0)
        {

            // cout<<k<<endl;
            f=arr[k]+arr[k-1];
            // cout<<f<<endl;
            f=f/2;
        }
        else
        {

            f=arr[k];
        }
        double median=2*f;
        //cout<<median<<" "<<arr[i+t]<<endl;
        if(median <=mp[i+t].second)
            count++;

    }

    cout<<count<<endl;
}
