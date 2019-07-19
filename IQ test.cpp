
#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{

    int m,i,od,n,ev,pos,po;
    cin>>m;
    ev=0;
    od=0;
    for(i=1;i<=m;i++)
    {
        cin>>n;
       int  c=n%2;

        if(c==0)
        {
            ev=ev+1;
            pos=i;

        }
        else
        {
            od=od+1;
            po=i;
     }

    }
if(ev==1)
    cout<<pos<<endl;
else
    cout<<po;


}
