#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int n,t,i,a,d,ct,sum;
    cin>>n;
    while(n--)
    {
        cin>>t;
        for(i=1; i<=t; i++)
        {
            cin>>a;
            mp[i]=a;
        }
        ct=0,d=0,sum=0;
        int l=1;
        for(int j=1; j<=t; j++)
        {
            l=1;
            for(i=1; i <t; i++)
            {
                //cout<<arr[i]<<" "<<arr[i+1]<<endl;
                if(mp[i]>mp[i+1])
                {
                    d=mp[i];
                    mp[i]=mp[i+1];
                    mp[i+1]=d;
                    d=mp[i+1]-i;
                    sum++;
                    if(d>2)
                    {
                        ct=1;
                        break;
                    }

                }

                else
                {
                    l++;
                }

            }
            if(l==t)
            {

                break;
            }


        }

        if(ct!=0)
            cout<<"Too chaotic"<<endl;
        else
            cout<<sum<<endl;
        sum=0;
    }
}
