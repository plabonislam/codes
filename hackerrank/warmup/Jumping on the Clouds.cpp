#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[1000],i,ct;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>arr[i];
        ct=-1;
    for(i=1;i<=n;i++)
    {
        ct++;
       // cout<<i<<endl;
        if(arr[i+2]==0)
        {
            if(i!=n-1)
                i++;
        }



    }
    cout<<ct<<endl;
}
