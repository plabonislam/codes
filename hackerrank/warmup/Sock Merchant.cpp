
#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{

    int n,arr[100000],visit[100000]={0},sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(visit[arr[i]]==1)
            continue;
        if(mp[arr[i]]>1)
        {
            sum+=mp[arr[i]]/2;
            visit[arr[i]]=1;

        }
    }
    cout<<sum<<endl;
}
