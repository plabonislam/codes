
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[10][10],arr[40]= {0},t=1,sum=0;
    int i,j,m,n,k;
    m=6,n=6;
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>array[i][j];
        }
    }

      for(i=1; i<=m; i++)
    {
        for(j=1; j<=i+2; j++)
        {
            cout<<i<<j<<" ";

        }
        cout<<endl;
    }
}
