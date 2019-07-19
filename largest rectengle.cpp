
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,n,j,a[1000005],b;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    int max=0;
    int ct=0;
    //cout<<a[n]<<"ha";
    for(i=1;i<=n;i++)
    {

        for(j=i;j<=n;j++)
    {
        if(a[i]<=a[j])
        {
            ct++;
        }
        else
        {

            break;
        }
    }

    ct=ct*a[i];

    if(ct>max)
    {
        max=ct;

    }
    ct=0;
    }
    cout<<max;

}
