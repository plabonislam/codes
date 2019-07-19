#include<stdio.h>
int main()
{
    int i,n,sum,team,t,tt,ttt,a,di,re;
    sum=0,t=0,tt=0,ttt=0;
    team=0;
    sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a==4)
        {
            sum++;
        }
        else if(a==3)
        {
            t++;
        }
        else if(a==1)
        {
            tt++;
        }
        else if(a==2)
        {
            ttt+=a;
        }
    }
  //  printf("%d %d %d %d\n",sum,t,tt,ttt);


    if(t>=tt)
    {
        team+=t;
        tt=0;
         //printf(" if 3 %d\n",team);
    }
    else if(tt>t)
    {
        tt=tt-t;
        team+=t;

    }
    team+=sum;

    sum=ttt+tt;
    di=sum/4;
    re=sum%4;
    team+=di;
    if(re!=0)
        team++;
    printf("%d\n",team);
}
