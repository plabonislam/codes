
#include <stdio.h>

void pr_pr(int i, int n, int *a)
{
    if(i>n/2)
        return;
    printf("%d %d\n",a[i],a[n-1-i]);
    pr_pr(i+1,n,a);

}

int main()
{
    int i, n, a[10];
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    pr_pr(0, n, a);
    printf("\n");
    return 0;
}


