#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int bionominal(int n,int c)
{
        if(n==c)
            return dp[n][c]=1;
        if(c==1)
            return dp[n][c]=n;
        if(dp[n][c]!=-1)
            return dp[n][c];
        else
        {
            dp[n][c]=bionominal(n-1,c)+bionominal(n-1,c-1);
            return dp[n][c];
        }
}
int main()
{

    int n,r,i,j;
    cin>>n>>r;
    memset(dp, -1, sizeof(int [100][100]));
    for(i=1;i<=n;i++)

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            bionominal(i,j);
        }

    }
    cout<<dp[n][r]<<endl;

}
