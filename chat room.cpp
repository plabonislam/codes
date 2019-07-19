#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    string a,b="hello";
    int i,j;
    cin>>a;
    for(i=0,j=0;i<a.length();i++)
    {
        if(a[i]==b[j])
        {
            j++;
        }

    }
    if(j==5)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}
