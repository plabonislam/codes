#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum,a;
    sum=0;
   while(cin>>n>>m)
   {

    while(n--)
    {
        cin>>a;
        if(a>m)
            sum+=2;
        else
            sum++;
    }
    cout<<sum<<endl;
    sum=0;
   }
}
