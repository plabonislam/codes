
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int a[100],t,n,i,s,e;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    sort(a,a+n+1);
    int m;
    s=1;
    e=n;
    m=(s+e)/2;
    cin>>t;
    int ct=1;
    while(s<e)
    {

        if(a[m]==t)
        {

           cout<<"YES";
           ct=0;
           return 0;
        }

        else if(a[m]<t)
        {
             s=m+1;

        }
        else if(a[m]>t)
        {
           e=m-1;
        }
        m=(s+e)/2;
    }
    if(ct==0)
        cout<<"got";
    else
        cout<<"NO";
}
