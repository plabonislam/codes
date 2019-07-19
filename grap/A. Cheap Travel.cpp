
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,re;
    double sum;
    double d;
    cin>>n>>m>>a>>b;
    d=(double)b/(double)m;
    if(d<a)
    {
        d=n/m;
        re=n%m;
        re=re*a;
        if(re>b)
            re=b;
        sum=d*b+re;
    }

    else
    {
     sum=a*n;
    }
    printf("%.lf",sum);

}
