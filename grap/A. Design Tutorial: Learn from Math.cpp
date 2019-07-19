#include<bits/stdc++.h>
using namespace std;
int main()
{
    int re,di,ct,n,k;
    int arr[]= {4,6,8};
    cin>>n;
    for(int i=0; i<3; i++)
    {
        ct=n-arr[i];
        if(ct%2==0)
        {
            break;
        }
        else
        {
            k=0;
            int t=sqrt(ct);
            for(int j=3; j<=t; j+=2)
            {
                if(ct%j==0)
                {
                    k=1;
                   // cout<<ct<<" "<<n-ct<<endl;
                    break;
                }
            }
           if(k==1)
                break;
        }
    }

    cout<<ct<< " "<<n-ct<<endl;


}
