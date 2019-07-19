#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    while(n--)
    {
        string s1,s2;

        cin>>s1>>s2;
        map<char,int>mp,mpc;
        int le,le2;
        le=s1.length();
        le2=s2.length();
        int ct=0;
        for(int i=0;i<le;i++)
        {
        mp[s1[i]]++;
       // cout<<mp[s1[i]];
        }
        for(int i=0;i<le2;i++)
        {
            mpc[s2[i]]++;
        }
        for(int i=0;i<le;i++)
        {
            char c=s1[i];
            //cout<<mp[c]<<s1[i]<<mpc[c]<<endl;
            if(mpc[c]>0)
            {
                ct=1;
                break;
            }
        }

        if(ct==1)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
