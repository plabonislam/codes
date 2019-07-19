#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    int i,j,n,ct;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
        mp[s[i]]++;
        ct=0;
    for(i='a'; i<='z';i++)
    {
        if(mp[i]%2!=0)
            ct++;
    }
    if(ct>1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
