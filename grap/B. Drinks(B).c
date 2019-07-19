#include <stdio.h>
int main()
{
    int n,t;
    double sum=0.0,a;
    double  p;
    scanf("%d",&n);
    t=n;
    while(n--)
    {
        scanf("%lf",&a);
        sum+=a;
    }

    //printf("%lf %d\n",sum,t);
    p=sum/t;
     printf("%.12lf\n",p);
}
