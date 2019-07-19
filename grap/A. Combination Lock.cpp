#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    string a,b;
    cin>>n;
    //getchar();
    cin>>a>>b;
    sum=0;
    for(int i=0;i<n;i++)
    {
      int  d=abs((a[i]-'0')-(b[i]-'0'));
      //cout<<d<<endl;
      if(d>5)
        d=10-d;
      sum+=d;
        //cout<<d;
    }
    cout<<sum<<endl;
    //cout<<a<<" "<<b<<endl;
}
