#include<iostream>
#include<cstdlib>
using namespace std;
int summ(int m);
int main()
{
    int n;
    cin>>n;
    int t=summ(n);
   cout<<t;
}
int summ(int m)
{
    if(m==0)
    {
        return 0;
    }

    else
       return  m+summ(m-1);
}
