
#include<iostream>
#include<cstdlib>
using namespace std;

void polyn(int n)
{
    if(n<=1)
        {
            cout<<"1";
            return;
        };


    cout<<"x^"<<n-1<<"+";
    polyn(n-1);



}
int main()
{
    int n,a[100];
    string t;
    cin>>n;
    polyn(n);

}
