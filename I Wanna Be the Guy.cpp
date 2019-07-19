#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
    int n,a,sum,b,d,i,j,ct,t,arr[1000];
    cin>>n;
    cin>>a;

    for(i=1;i<=a;i++)
    {
        cin>>arr[i];
    }


    cin>>b;
     t=0;
    for(i=1;i<=b;i++){
        cin>>d;
        ct=0;

        for(j=1;j<=a;j++)
        {
            if(arr[j]==d)
            {
                ct=1;

                break;
            }
        }
        if(ct==0)
        {
         t++;
        }

    }

    sum=a+t;


    if(sum==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }


}
