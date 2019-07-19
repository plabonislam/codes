#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,re,di,sum,t;
    while(cin>>n>>m)
    {
        t=0;
        sum=n;
        re=0;
        while(1)
        {
            di=(n)/m;
            re=n%m;
            //cout<<t<<" "<<di<<endl;
            sum+=di;
            n=di+re;
            // cout<<di<<"end "<<re<<endl;
            if(n<m)
                break;
            //cout<<t<<" "<<endl;
        }
        cout<<sum<<endl;
    }
}
