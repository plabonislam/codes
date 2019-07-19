#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    int sum=0,ct=0;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(sum==0 && str[i]=='D')
            ct++;
        if(str[i]=='D')
            sum+=-1;
        else if(str[i]=='U')
            sum+=1;
    }
    cout<<ct<<endl;
}
