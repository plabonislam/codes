
#include<iostream>
#include<cstdlib>
using namespace std;
int fact(int m);
int main ()
{
    int i,n,j;
    cin>>n;
    int g=fact(n);
        cout<<g;
}
int fact(int m)
{
    if(m==0 ||m==1)
        return 1;
    else
        return m*fact(m-1);
}
