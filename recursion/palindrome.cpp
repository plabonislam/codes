#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    int i,j,n;
    cin>>a;
    n=a.length();
    j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            j=2;
            break;
        }
    }
    if(j==2)
    {
        cout<<"NOT";
    }
    else
        cout<<"YES";
}

