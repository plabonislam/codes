#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,i,j,d,array[10000];
    double max;
    cin>>n>>l;
    max=0;
    for(i=1;i<=n;i++)
    {
        cin>>array[i];
    }
    sort(array,array+n+1);


    for(i=1;i<n;i++)
    {
        d=array[i+1]-array[i];
        if(d>max)
            max=d;
       // cout<<d<<"pl"<<endl;
    }
    max=max/2;
     //max=max/2.0;
    d=array[1]-0;
    if(d>max)
            max=d;
    d=l-array[n];
    if(d>max)
            max=d;
    printf("%.10lf",max);


}
