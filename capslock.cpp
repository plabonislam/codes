#include <bits/stdc++.h>
using namespace std;
string str;
void upper(string str)
{
    int i;

    if(str[0]> 96 && str[0]<=122)
        str[0]=str[0]-32;

    for(i=1; i<str.length(); i++)
    {
        if(str[i]>=65 && str[i]<=91)
        {
            str[i]=str[i]+32;
        }
    }
    cout<<str<<endl;
}
int main()
{
    int i,ct=0;

    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]> 96 && str[i]<=122)
        {
            ct=1;
            upper(str);
            break;

        }

    }
    if(ct==0)
        cout<<str;
    return 0;
}
