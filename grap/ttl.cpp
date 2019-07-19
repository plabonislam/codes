#include <iostream>
#include<vector>
#include<queue>
using namespace std;
#define Max 10000
vector<int>v[Max];
int visit[Max]={0};
queue<int>qu;
int t=0,it;
void  bfs_ttl(int e)
{

    if(qu.empty())
    {
        return ;
    }
    qu.pop();
   int  f=visit[e];

    for(int i=0;i<v[e].size();i++)
    {
        if(visit[v[e][i]]==0 && f<=it)
        {

            qu.push(v[e][i]);
            visit[v[e][i]]=visit[e]+1;
           // printf("%d\n",v[e][i]);
        }
        else if(visit[v[e][i]]==0 && f>it)
        {
            qu.push(v[e][i]);

             visit[v[e][i]]=visit[e]+1;
             t++;
        }
    }
    bfs_ttl(qu.front());


}

int main()
{
    int E,c,d,e,f;
    scanf("%d",&E);
    for(int i=1;i<=E;i++)
    {
        scanf("%d%d",&c,&d);
        v[c].push_back(d);
        v[d].push_back(c);
    }
while(scanf("%d %d",&e,&f)!=EOF)
{
    qu.push(e);
    visit[e]=1;
    it=f;
    bfs_ttl(e);
    cout<<t<<endl;
    t=0;
    visit[10000]={0};

}

}

/*
16
10 15
15 35
15 20
35 55
20 25
20 40
10 30
50 55
30 47
35 40
47 50
55 60
25 45
40 60
45 65
60 65
*/
