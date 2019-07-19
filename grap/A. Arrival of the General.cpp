#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max,min,arr[10000],ma,mn;
    cin>>n;
    max=0;
    min=100000000000;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
            {
                max=arr[i];
                ma=i;
            }
        if(arr[i]<=min)
            {
                min=arr[i];
                mn=i;
            }

    }
    //cout<<ma<<" "<<mn;

    if(ma<mn)
    {
       // cout<<"PLA";
         ma=ma-1;
        mn=n-mn;
    }
    else

    {
        ma=ma-1;
        mn=n-mn-1;
    }

    cout<<(ma+mn);
}
