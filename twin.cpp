#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int coin[200],n,sum,high,ct=0,i;
    cin>>n;
    sum=0;
    for(i=0;i<n;i++)
    {
      cin>>coin[i];
      sum+=coin[i];
    }
        high=0;
    sort(coin,coin+n);
    sum=sum/2;
    for(i=n-1; high <=sum;i--)
    {
        ct++;
        high+=coin[i];
    }
    cout<<ct;
}
