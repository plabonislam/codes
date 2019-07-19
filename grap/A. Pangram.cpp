#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    int n,i,ct;
    string s;

    while(cin>>n>>s){
    ct=0;
    if(n<26)
        ct=n;
    else
    {
      for(i=0;i<s.length();i++)
    {
        s[i]=tolower(s[i]);
        if(mp[s[i]]==0)
        {
           mp[s[i]]=1;
           ct++;
        }
   // cout<<ct<<endl;
    }
    }
    if(ct==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }

    }



