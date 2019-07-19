#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,m,ct;
    cin>>n>>m;
    t=240-m;
    for(i=1;i<=n;i++)
    {

        t=t-(5*i);
        if(t<0)
        {
            ct=i;
            ct--;
            break;
        }
        else
        {
            ct=i;
        }

    }
    cout<<ct;
}
