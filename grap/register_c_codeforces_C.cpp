#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main()
{
int n;
string st;
cin>>n;
while(n--)
{
    cin>>st;
    if(mp[st]==0)
    {
        cout<<"OK"<<endl;
        mp[st]=1;
    }
    else
    {

        cout<<st<<mp[st]<<endl;
        mp[st]++;
    }

}
}
