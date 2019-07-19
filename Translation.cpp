
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    string a,b,c;
    int i,j,ct=0,l;
    cin>>a;
    cin>>b;
    l=b.length();
    for(i=0,j=l-1;i<a.length();i++,j--)
    {
        if(a[i]!=b[j])
        {
        ct=1;
        break;
        }
    }
    if(ct==0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

}
