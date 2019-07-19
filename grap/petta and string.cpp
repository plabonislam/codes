#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int l1,l2,ct;
    l1=s1.length();
    l2=s2.length();
    for(int i=0;i<l1;i++)
    s1[i]=tolower(s1[i]);
    for(int i=0;i<l2;i++)
        s2[i]=tolower(s2[i]);
    if(l1>l2)
        cout<<1;
    else if(l2>l1)
        cout<<-1;
    else
    {
        ct=0;
        for(int i=0;i<l1;i++)
        {
            if(s1[i]>s2[i])
            {
                ct=1;
                break;
            }
            else if(s1[i]<s2[i])
            {
                ct=-1;
                break;
            }
        }
       cout<<ct;
    }


}
