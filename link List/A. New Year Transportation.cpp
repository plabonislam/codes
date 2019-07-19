
#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int n,m,ct,t;
    long long sum;
    cin>>n>>m;
    for(int i=1;i<n;i++)
    {
        cin>>t;
        mp[i]=t;
    }
    sum=1;
    for(int i=1;i<n;i++)
    {
        sum=sum+mp[sum];
        if(sum==m)
        {
            cout<<"YES"<<endl;
            break;
        }
        else if(sum>m)
        {
            cout<<"NO"<<endl;
            break;
        }

    }


}
