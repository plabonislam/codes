
#include<stdio.h>
int main()
{

    int n,m,ct,i,sum,a;
    scanf("%d%d",&n,&m);
        sum=0;
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        ct=0;
        sum+=a;

        if(sum>=m){
            ct=sum/m;
            sum=sum%m;
            printf("%d ",ct);
                }
        else
        {

        printf("0 ");
        }

    }

    return 0;

}
