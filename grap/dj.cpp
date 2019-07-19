#include<bits/stdc++.h>
using namespace std;
vector<int>vc[100];

int dt[100],avail[100],cost[100][100]={0};
int visit[1000]={0};
int m,n,f=0,y=0;

struct node
{
    int vtx;
    int weight;
    bool operator < (const node&p)const
    {
        return weight>=p.weight;
    }
};

int dijkstra(int a,int b)
{


for ( int i=0;i<100;i++)
    dt[i]=1000;
    dt[a]=0;


//    dt[a]=0;
    //  nvalue[a]=a;
    priority_queue<node>pq;
    node start;
    start.vtx=a;
    start.weight=0;
    pq.push(start);
    while(!pq.empty())
    {
        node u=pq.top();

       avail[f++]=u.vtx;
        pq.pop();

        if(u.vtx==b)
            return avail[f];
        for(int i=0; i<vc[u.vtx].size(); i++)
        {
            int v=vc[u.vtx][i];
            if(dt[v]>dt[u.vtx]+cost[u.vtx][i])
            {

                dt[v]=dt[u.vtx] + cost[u.vtx][i];
                start.vtx=v;
                start.weight=dt[v];
                pq.push(start);


            }
        }
    }
    return -1;
}

int main()
{
    int a,b,w;
    scanf("%d%d",&n,&m);
    while(m--)
    {
        scanf("%d%d%d",&a,&b,&w);
        vc[a].push_back(b);
        vc[b].push_back(a);
        cost[a][b]=w;
        cost[b][a]=w;
    }

    int k = dijkstra(1,n);
    if(k==-1)
        cout<<"NO";
    else
        {
            for(int i=0;i<f;i++)
                cout<<avail[i];
        }

}
