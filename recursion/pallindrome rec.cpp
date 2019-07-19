
#include<iostream>
#include<algorithm>
#include<cstring>
#include<ctype.h>
using namespace std;

int pall(string a,int i,int e)
{

   if(e<i)
        return -1 ;

    if(a[i]!=a[e])
    {
        return 1;
    }
     pall (a,i+1,e-1);



}
int main()
{
    int i,j;
    string a,b;
    cin>>a;
    int t=a.length();
   int k= pall(a,0,t-1);
   if(k==1)
    cout<<"NO";
    else
    cout<<"YES";
}
