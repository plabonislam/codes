#include<stdio.h>
int main()
{

    int n,present[1000],i,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        present[m]=i;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",present[i]);
    }
}
