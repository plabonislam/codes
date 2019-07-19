#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int bsearchh(int *a,int s,int e,int t)
{
    if(s>e)
        return 1;
    int m=(s+e)/2;
    if(a[m]==t)
        return 2;

    else if(a[m]<t)
    return bsearchh(a,m+1,e,t);
    else if(a[m]>t)
        return bsearchh(a,s,m-1,t);



}

int main()
{
int a[100],t,n,i,s,e,m;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    sort(a,a+n+1);
    m=(1+n)/2;

    cin>>t;
    int d=bsearchh(a,1,n,t);
    if(d==1)
            cout<<"NO";
    else if(d==2)
        cout<<"yes";
}
