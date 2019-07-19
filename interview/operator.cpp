#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=50;
    for(int i=1;i<7;i+=2)
    {
        cout<<(~i)<<endl;
        x-=((~i)+1);
    }
    cout<<-x;
    cout<<x;
}
