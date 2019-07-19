#include<stdio.h>
int main()
{

    long long a,b,i,n,ans,t;

    scanf("%lld%lld",&a,&b);

    n=a/2;
    t=a%2;
    if(t==0 && b<=n)
    {
        ans=2*b-1;
    }
    else if(t==0 && b>n)
    {
        ans=2*b-a;
    }
     else if(t!=0 && b<=n+1)
    {
        ans=2*b-1;
    }
    else if(t!=0 && b>n+1)
    {
        ans=2*b-a-1;
    }
    printf("%lld\n",ans);
}
