#include<stdio.h>
int main()
{
    int n,arr[100];
    scanf("%d",&n);
    int i,j,t;
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    for(i=n,j=1;i>(3*n)/4;i--,j++)
    {
        t=arr[i];
        arr[i]=arr[n/2+j];
        arr[n/2+j]=t;

    }
for(i=1;i<=n;i++)
        printf("%d",arr[i]);
}
