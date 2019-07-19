#include<iostream>
#include <algorithm>
using namespace std;
#define Max 100009
int main()
{
    int a[Max],b[Max],c[Max];
    int i,n;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<n; i++)
    {
        cin>>b[i];
    }
    for(i=1; i<n-1; i++)
    {
        cin>>c[i];
    }
    sort(a,a+n+1);
    sort(b,b+n);
    sort(c,c+n-1);


    int ct=0;
    for(i=1; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            ct=a[i];
            break;
        }
    }
    if(ct!=0)
        cout<<ct<<endl;
    else
        cout<<a[n]<<endl;
ct=0;
    for(i=1; i<n-1; i++)
    {
        if(b[i]!=c[i])
        {
            ct=b[i];
            break;
        }
    }
     if(ct!=0)
        cout<<ct<<endl;
    else
        cout<<b[n-1]<<endl;
}
