
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int polyn(int n,int x)
{
    cout<<pow(x ,n-1)<<" "<<endl;
    if(n==1)
        return 1;
    else
        return (pow(x, n-1))+polyn(n-1,x);
}


int main()
{
    int i,n,x;
    cin>>x;
    cin>>n;

     i=polyn(n,x);
    cout<<i;
}
