#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
map<char,int>mp,mpc;
int main ()
{
    string str,co,st;
    char app[27]= {"abcdefghijklmnopqrstuvwxyz"};

    cin>>str>>co;
    int i,j,ct,k;

    ct=0;
    for(i=0; i<str.length(); i++)
    {
        mp[str[i]]++;
    }
    for(i=0; i<co.length(); i++)
    {
        char c=co[i];
        if(mp[c]>0)
        {
            mpc[c]++;
            ct++;
           // cout<<co[i]<<endl;
        }
    }                                      // "This is an example sentence."

    k=co.length()-ct;
    //            ^^^^^^^^
    for(i=0;i<strlen(app);i++)
    {
        if(mp[app[i]]==0)
            continue;
        else if(mp[app[i]]>=mpc[app[i]])
        {
         int d=mp[app[i]]- mpc[app[i]] ;
         k+=d;

        }
        else if(mp[app[i]]<mpc[app[i]])
        {
           int  d=mpc[app[i]]-mp[app[i]];
            k+=d;
        }

    }

    // "This is an sentence."
    cout<<k<<endl;
    // "This sentence."
    return 0;
}
