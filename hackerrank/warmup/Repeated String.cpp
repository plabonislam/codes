#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long n,t,re,ct;
    cin>>s>>n;
    int l=s.length();
    t=n/l;
    re=n%l;
    ct=0;
   // cout<<re<<"PP"<<endl;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='a')
            ct++;
    }
    int k=0;
    for(int i=0;i<re;i++)
    {
       // cout<<"go"<<endl;
        if(s[i]=='a')
            k++;
    }
    t=(t*ct)+k;
    cout<<t<<endl;

}
