#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double sum=0.0,a;
    double  p;
    cin>>n;
    while(n--)
    {
        scanf("%lf",&a);
        sum+=a;
    }
    p=sum/double(1.0*n);
     printf("%lf\n",p);
}
