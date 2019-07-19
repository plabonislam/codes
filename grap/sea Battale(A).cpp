#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,sum,t;
    cin>>a>>b>>c>>d;
    if(c>a)
    {
        t=c;
        c=a;
        a=t;
    }
    if(b<d)
    {
        t=b;
        b=d;
        d=t;
    }

    sum=(a+2)*(b+d+2);
    sum=sum-(a*(b+d));
    cout<<sum;
}
