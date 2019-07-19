#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    int l,i,j,k,n,t,ct=0,temp;
    string str,subst;
    cin>>n>>str;

    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
           subst=str.substr(i,j);
           k=subst.length();
           temp=0;
           if(k==1)
            {
                ct++;
                cout<<subst<<" "<<ct<<endl;

            }
           else
           {
               for(l=0,t=k-1;l<k/2;l++,t--)
               {
                 if(subst[l]==subst[t] && l+1==k/2)
                 {
                     if(l==0)
                        temp=1;
                     else
                     {
                         if(subst[l-1]==subst[l])
                         {
                             temp=1;
                         }
                     }
                 }
                 else if(subst[l]==subst[t] && subst[l+1]==subst[l])
                 {
                     temp=1;
                     continue;
                 }
                 else
                 {
                     temp=0;
                     break;
                 }
               }
           }
           if(temp==1)
            {
                ct++;
                cout<<subst<<" "<<ct<<endl;

            }
        }
    }

    cout<<ct<<endl;

}
