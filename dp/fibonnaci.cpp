#include<bits/stdc++.h>
using namespace std;
int dp[100];
int  fibbo(int m)
{
    if(m==0|| m==1)
        return dp[m]=1;
    if(dp[m]!=-1)
        return dp[m];
    else
    {
        dp[m]=fibbo(m-1)+fibbo(m-2);
        return dp[m];
    }

}
int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    int k=fibbo(n);
    for(int i=1;i<=n;i++)
    cout<<k<<" "<<dp[i]<<endl;

}
