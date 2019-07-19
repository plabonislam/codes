
#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string a;
    int i,n;
    cin>>n;
    while(n--)
    {


stack<char>sk;
    cin>>a;
    for(i=0;i<a.length();i++)
    {
        if(a[i]=='('|| a[i]=='{'||a[i]=='[')
            {
                sk.push(a[i]);
            }

        else if(sk.empty() && (a[i]=='}' ||a[i]==')'||a[i]==']'))
            {
                sk.push(a[i]);
            }
        else if(a[i]==')'&& sk.top()=='(')
            {
                sk.pop();
            }
        else if(a[i]=='}'&& sk.top()=='{')
            {
                sk.pop();
            }
        else if(a[i]==']'&& sk.top()=='[')
            {
                sk.pop();
            }


    }


    if(!sk.empty())
    {
        cout<<"NO"<<endl;

    }
    else{
        cout<<"YES"<<endl;
    }

    }

    return 0;
}
