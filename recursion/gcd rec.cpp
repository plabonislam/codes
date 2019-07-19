
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int gcd(int a,int b)
{

    if(a%b==0)
        return b;
    else
        return gcd(a,a%b);
}

int main()
{
    int i,n,x;
    cin>>x;
    cin>>n;

     i=gcd(n,x);
    cout<<i;
}

