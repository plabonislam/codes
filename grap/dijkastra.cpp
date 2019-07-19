
#include<bits/stdc++.h>
using namespace std;
#define max 1000007
vector<int>vc[max];
vector<int>cost[max];
long long lfs[max],par[max],output[max];
int m,n,d=0;
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
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0 && m==0)
            break;
        for(i=0; i<=n; i++)
        {
            vc[i].clear();
            cost[i].clear();
        }
        memset(lfs,0,n+m);
        memset(par,0,n+m);
        memset(output,0,n+m);
        for(i=0; i<m; i++)
        {
            scanf("%d %d %d",&u,&v,&w);
            vc[u].push_back(v);
            vc[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        k=djkstra(1,n);
        if(k==-1)
            printf("-1");
        else
        {
            // printf("%d\n",k);
            k=n;

            while(1)
            {
                output[d++]=k;
                if(k==par[k])
                    break;
                k=par[k];
            }
        }

        for(i=d-1; i>=0; i--)
            cout<<output[i]<<" ";
        cout<<endl;
        d=0;

    }
    return 0;
}

int djkstra(int a,int b)
{
    for(int i=0; i<=n; i++)
        lfs[i]=1844674407370955161;


    lfs[a]=0;
    par[a]=a;

    priority_queue<node>q;
    node yy;
    yy.vtx=a;
    yy.wght=0;
    q.push(yy);
    while(!q.empty())
    {
        node u=q.top();
        //  cout<<u.vtx;
        //cout<<"done"<<endl;
        q.pop();

        if(u.vtx==b)
            return lfs[u.vtx];
        for(int i=0; i<vc[u.vtx].size(); i++)
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
