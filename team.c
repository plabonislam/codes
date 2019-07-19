#include<stdio.h>
int main()
{
    int i,j,k,n,m,c;
    scanf("%d",&j);
    m=0;
    while(j--)
    {
        c=0;
        for(i=1;i<=3;i++)
        {
            scanf("%d",&n);
            if(n==1)
                c++;
        }
        if(c>=2)
            m++;
    }
    printf("%d",m);
}
