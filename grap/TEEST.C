#include<stdio.h>
int main()
{
    int i,n,arr[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    int k=n;
    while(1)
    {
        printf("%d ",k);
        if(arr[k]==k)
            break;
        k=arr[k];
    }
}
