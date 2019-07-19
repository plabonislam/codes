
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string main[10000],check[10000],a;
    int n,m,ct;
    cin>>n>>m;
map<string,int>mp,mpc;

     for (int i = 0; i < n; i++) {
      cin >> main[i];
     mp[main[i]]++;

    }


   for(int i=0;i<m;i++) {
        cin>>check[i];
        mpc[check[i]]++;
    }

    ct=0;
    for(int i=0;i<m;i++)
    {
        a=check[i];
       // cout<<mp[check[i]]<<" "<<mp[main[i]];
        if(mpc[check[i]]>mp[a])
        {
            ct=1;
            break;
        }

    }

    if(ct==1)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;

}
