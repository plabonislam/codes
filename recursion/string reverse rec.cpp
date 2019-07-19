#include<iostream>
#include<algorithm>
#include<cstring>
#include<ctype.h>
using namespace std;

void rev(string a,int i)
{
   if(a.length()==i)
        return ;

    rev(a,i+1);
    cout<<a[i];

}
int main()
{
    int i,j;
    string a,b;
    cin>>a;
    int t=a.length();
    rev(a,0);
}
