
#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{

    int i,co;
    string a,b;
    cin>>a;
    char cc;
    co=0;
    for(i=0;i<a.length();i++)
    {
    if( a[i]>='A' && a[i]<='Z')
    {
        co++;
    }
    }
    i=a.length()-co;
    if(i>=co)
    {
        for(i=0;i<a.length();i++)
        {
           a[i]= tolower(a[i]);

        }
    }

    else
    {
        for(i=0;i<a.length();i++)
        {
           a[i]= toupper(a[i]);

        }
    }
    cout<<a;
}
