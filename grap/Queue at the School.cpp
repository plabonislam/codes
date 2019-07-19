#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string st;

    cin>>n;
    cin>>t;
     cin>>st;
    while(t--)
    {
    for(int i=0;i<st.length();i++)
    {
        if(st[i]=='B' && st[i+1]=='G')
        {
            st[i]='G';
            st[i+1]='B';
            i++;
        }
    }
    }
    cout<<st;

}
