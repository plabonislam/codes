#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
#define max 40000
int main()
{
    int n,array[max],ct,sum=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>array[i];
        mp[array[i]]++;

    }

    for(int i=1; i<=n; i++)
    {
        if(mp[array[i]]>1)
        {
            int t=array[i];

            while(1)
            {
                t++;
                sum++;
                if(mp[t]==0)
                {
                    mp[t]++;
                    break;
                }
            }
            mp[array[i]]--;

        }


    }
    cout<<sum;
}
