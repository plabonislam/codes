#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    while(n--){
    string s,c,d[100000];
    map<string,int>mp,np;
    cin>>s;
    int i,j,k,l,t;
    l=s.length();
    k=0;
    for ( i = 0; i < l; i++)
    {
        for (j = 1; j <= l- i; j++)
        {

            c=s.substr(i,j);
            sort(c.begin(),c.end());
            d[k++]=c;
            mp[c]++;
        }
    }
    int sum=0;
    for(i=0;i<k;i++)
    {
        if(mp[d[i]]>1 && np[d[i]]==0 )
        {
       // cout<<d[i]<<mp[d[i]]<<endl;
            int t=mp[d[i]];
            t=(t*(t-1))/2;
            sum+=t;
        np[d[i]]=1;
        }
    }

cout<<sum<<endl;
}
}
