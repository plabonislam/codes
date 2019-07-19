#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,a[100][100],d1,d2,d,i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(a[i][j]==1)
            {
                m=i;
                n=j;
                break;
            }
        }
    }
    printf("%d %d\n",m,n);

d1=abs(m-3);
    d2=abs(n-3);
    d=d1+d2;
    printf("%d",d);

}
