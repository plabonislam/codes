#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    int ct=0;
    cin>>s1;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='1' && s1[i+1]=='1' && s1[i+2]=='1' && s1[i+3]=='1' && s1[i+4]=='1'
           &&s1[i+5]=='1'&& s1[i+6]=='1')
        {
            cout<<"YES";
            ct=1;
                break;
        }
       else  if(s1[i]=='0' && s1[i+1]=='0' && s1[i+2]=='0' && s1[i+3]=='0' && s1[i+4]=='0'
           &&s1[i+5]=='0'&& s1[i+6]=='0')
        {
            cout<<"YES";
            ct=1;
                break;
        }
    }
    if(ct==0)
        cout<<"NO";
}
