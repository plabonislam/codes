
#include<iostream>
#include<cstdlib>
using namespace std;
void odd(int n,int *a,int i)
{
    if(i==n)
        return;
     if(a[i]%2!=0)
            cout<<a[i];
    odd(n,a,i+1);
}
int main()
{
    int a[100],n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];

    odd(n,a,1);
    return 0;
}
