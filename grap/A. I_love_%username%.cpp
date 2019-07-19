#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ct;
    cin>>n;
    max=0;
    min=100000;
    ct=-2;
    while(n--)
    {
        cin>>m;
        if(m>max)
        {
            ct++;
           max=m;
        }

        if(m<min)
        {
            ct++;
             min=m;
        }

    }
    cout<<ct;
}
