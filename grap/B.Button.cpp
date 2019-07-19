
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,r,dp[1007][1007]={0};
   // scanf("%d",&loop);
    scanf("%d",&n);
    r=n-1;
    for(i=1;i<=n;i++)
    {
     for(j=1;j<=i;j++)
        {
            if(j==1)
            {
                dp[i][j]=i;
            }
            else if(j==i)
            {
                dp[i][j]=1;
            }
            else
            dp[i][j]=dp[i-1][j-1]+dp[i-1][j];

        }
    }
    int s=r;

     j=1;
    while(1)
    {
        j=j*s;
        s--;
        if(s==1 || s==0)
            break;
    }

    int t=(dp[n][r])*j+1;
    printf("%d\n",t);
}
