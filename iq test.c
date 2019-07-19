#include<stdio.h>
int main()
{
      int m,i,od,ev,pos,po;
    scanf("%d",&m);
    ev=0;
    od=0;
    for(i=1;i<=m;i++)
    {
        scanf("%d",&n);
       int  c=n%2;

        if(c==0)
        {
            ev=ev+1;
            pos=i;

        }
        else
        {
            od=od+1;
            po=i;
        }

    }

    cout<<ev<<endl;
    cout<<od<<endl;
}
