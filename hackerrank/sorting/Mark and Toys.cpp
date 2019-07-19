#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,t,i,j,m,array[1000000];
    cin>>n>>t;
    m=0;
    for(i=0;i<n;i++)
    {
        cin>>array[i];

    }
    sort(array,array+n);
    for(i=0;i<n;i++)
    {
        t=t-array[i];
        if(t>-1)
        {
            m++;
        }
    }

   cout<<m;
}
