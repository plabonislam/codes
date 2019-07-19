
#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    string str,n;
    cin>>n;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        mp[str[i]]++;
    }
    if(mp['A']>mp['D'])
        cout<<"Anton";
    else if(mp['D']>mp['A'])
        cout<<"Danik";
    else
        cout<<"Friendship";
}
