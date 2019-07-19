#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,fx,fy,k,p;
    float x;
    fx=1,fy=1;
    for(int i=1;i<=30;i++)
    {
        if(54%(i+i*2)==0)
        {
            p=i+i*2;
        x=54/p;
        x=x*p;
        cout<<x<<endl;
        //y=x%54;

        cout<<y<<endl;
        }
    }

}
