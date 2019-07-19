#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[10][10],arr[40]= {0},t=1,sum=0,max=-999999;
    int i,j,m,n,k;
    m=6,n=6;
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>array[i][j];
        }
    }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
                sum=0;
                int t=j+2;
            for(k=j;k<=t;k++)
            {
                if(k==j+1)
                    sum+=array[i+1][k];

                sum+=array[i][k]+array[i+2][k];
            }
            if(sum>max)
                max=sum;
           // cout<<sum<<" ";
        }
      //  cout<<endl;
    }
    cout<<max;

}
