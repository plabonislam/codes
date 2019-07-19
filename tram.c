#include<stdio.h>
int main()
{
    int i,n,a,b,sum,max;
    scanf("%d",&n);
    sum=0,max=0;
    while(n--)
    {
        scanf("%d%d",&a,&b);
        sum-=a;
        sum+=b;
        if(sum>=max)
        {
            max=sum;
        }
    }
    printf("%d\n",max);
}
