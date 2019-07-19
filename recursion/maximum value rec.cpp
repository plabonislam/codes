
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int maximum(int *a,int n,int i,int max,int ct)
{

    if(i>n)
        return ct;
    if(max>a[i] && ct<a[i])
        ct=a[i];
    maximum(a,n,i+1,max,ct);
}

int main()
{
    int a[100],n,i, b,max, l;
    cin>>n;
    max=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }

    int t=maximum(a,n,1,max,0);
    cout<<t;

    return 0;
}
