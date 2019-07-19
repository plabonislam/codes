
#include<bits/stdc++.h>
using namespace std;
int main()
{
string st,st1;
int len,ct=0,i,j;
st1="";
getline (cin, st);
len=st.length();
ct=len-2;
if(len>2)
    st1 +=st[1];
for(i=2;i<len;i++)
{
    int le=st1.length();
    if(st[i]==' ' ||st[i]==',')
    {
        ct--;
        continue;
    }
    st1 +=st[i];
    for(j=0;j<le;j++)
    {
     if(st[i]==st1[j])
     {
        ct--;
        break;
     }
    }
}
cout<<ct;
}
