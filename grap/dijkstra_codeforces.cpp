
#include<bits/stdc++.h>
using namespace std;
vector<int>vc[100];
vector<int>cost[100];
int lfs[100],par[100],dd[100];
int m,n,st=0;
struct node
{
    int vtx,wght;
    bool operator < (const node&p)const
    {
        return wght>=p.wght;
    }
};
int djkstra(int a,int b);
int main()
{
    int i,j,k,l,u,v,w,a,b;

        scanf("%d%d",&n,&m);
        for(i=0;i<=n;i++)
        {
            vc[i].clear();
            cost[i].clear();
        }
        for(i=0;i<m;i++)
        {
            scanf("%d %d %d",&u,&v,&w);
            vc[u].push_back(v);
            vc[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }

        k=djkstra(1,n);
        if(k==-1)
            printf("no way\n");
        else
        {
            printf("%d\n",k);
            k=n;
            while(1)
            {
                cout<<k<<" ";
                cout<<par[k]<<endl;

                if(par[k]==k)
                    break;
                k=par[k];
            }
        }


    return 0;
}

int djkstra(int a,int b)
{
    for(int i=0;i<=n;i++)
        lfs[i]=10000;

    lfs[a]=0;
    par[a]=a;
    dd[st++]=a;

    priority_queue<node>q;
    node yy;
    yy.vtx=a;
    yy.wght=0;
    q.push(yy);
    while(!q.empty())
    {
        node u=q.top();
        q.pop();

        if(u.vtx==b)
            return lfs[u.vtx];
        for(int i=0;i<vc[u.vtx].size();i++)
        {
            int v=vc[u.vtx][i];

            if(lfs[v]>lfs[u.vtx]+cost[u.vtx][i])
            {

                lfs[v]=lfs[u.vtx]+cost[u.vtx][i];
                par[v]=u.vtx;
                yy.vtx=v;
                yy.wght=lfs[v];
                q.push(yy);
            }
        }
    }
    return -1;

}
