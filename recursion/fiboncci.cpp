#include<iostream>
#include<cstdlib>
using namespace std;
int fibbo(int n);
int main()
{
    int n;
    cin>>n;
    int m=fibbo(n);
    cout<<m;
}
int fibbo(int n)
{
    if(n==0 || n==1)
    return 1;
    else
        return fibbo(n-1)+fibbo(n-2);

}
