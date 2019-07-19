
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string st;

    cin>>n;
     cin>>st;
     int ct=0;
    for(int i=0;i<n-1;i++)
    {
        if(st[i]=='R' && st[i+1]=='R')
        {
           ct++;
        }
        else if(st[i]=='G' && st[i+1]=='G')
        {
           ct++;
        }
        else if(st[i]=='B' && st[i+1]=='B')
        {
           ct++;
        }
    }
    cout<<ct;

}
