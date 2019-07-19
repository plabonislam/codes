#include<bits/stdc++.h>
using namespace std;
#define max 1000000
vector<int>vc[max];
vector<int>cost[max];
int dt[max],par[max],n,m,kt=0;
struct node{
int weight,vrtx;
bool operator <(const node &p)const{
    return weight >= p.weight;
}
};
int dijk(int a,int b)
{
    for(int i=0;i<n+100;i++)
    {
        dt[i]=10000;
    }
    dt[a]=0;
    par[a]=a;
    priority_queue<node>sq;
    node start;
    start.vrtx=a;
    start.weight=0;
    sq.push(start);
    while(!sq.empty())
    {
        node u=sq.top();
        sq.pop();
       cout<<u.vrtx;
        if(u.vrtx==b)
            return 1;
        for(int i=0;i<vc[u.vrtx].size();i++)
        {
            int v=vc[u.vrtx][i];


            if(dt[v]> dt[u.vrtx] + cost[u.vrtx][v])
            {
              dt[v]=dt[u.vrtx]+cost[u.vrtx][v];
            start.vrtx=v;
            start.weight=dt[v];
            par[v]=u.vrtx;
            sq.push(start);
            }
        }
    }
return -1;
}


int main()
{
    int a,b,w;
    cin>>n>>m;
    while(m--)
    {
        cin>>a>>b>>w;
        vc[a].push_back(b);
        vc[b].push_back(a);
        cost[a].push_back(w);
        cost[b].push_back(w);

    }
   int t= dijk(1,n);
   if(t==1)
    {
        for(int i=0;i<kt;i++)
        {
            cout<<par[i]<<" p";
        }
    }
    else
    cout<<"NO";

}
