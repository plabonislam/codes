
#include<stdio.h>
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    string a,b;
    int i,j,k;
    cin>>a;
    for(i=0;i<a.length();i++)
    {
        k=0;
        for(j=0;j<b.length();j++)
        {
            if(a[i]==b[j])
            {
                k=1;
                break;
            }
        }
        if(k==0)
            b+=a[i];
    }
    k=b.length();
    if(k%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}
