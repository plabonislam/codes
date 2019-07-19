#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,array[50000];
    j=1;
    cin>>n;
    for(i=1; i<=n; i++)
    {

        cin>>array[j]>>array[j+1]>>array[j+2];
        cout<<j;
        j=j+3;
    }
 j=1;
    int sum=0,ct=0,sum1=0,sum2=0;
    for(i=1; i<=n; i++)
    {

        sum+=array[j];
        sum1+=array[j+1];
        sum2+=array[j+2];
        j=j+3;


    }
    if(sum!=0 || sum1!=0 || sum2!=0)
        {
           cout<<"NO";
        }
    else
        cout<<"YES";
}
