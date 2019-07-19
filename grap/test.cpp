#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,ct=0;
    cin>>a;
    int length = to_string(a).length();
    if (a%4==0 || a%7==0 || a%47==0 || a%74==0 || a%774==0 || a%747 ==0
        ||a%477==0|| a%447==0|| a%474 ==0)
    {
        ct=1;
    }


if(ct==1)
    cout<<"YES";
else
    cout<<"NO";
}
