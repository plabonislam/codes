#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i ,j,n,k,m;
    cin>>n>>m;
int    t=m/2;
    for(i=0;i<4;i++)
    {

        for(j=1;j<=t-i;j++)
        {
        cout<<" ";
        }
int        d=t-t+i;
        if(d!=0){
        for(k=t-i;k<=t+i;k++)
            cout<<'*';
        }
        else
            cout<<'*';
        cout<<endl;
    }
}
