#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define MAX 10000
int visit[10000]={0};
vector<int> edge[MAX];
queue<int>qu;
void bfs(int n)
{
    if(qu.empty())
    {
        return;
    }
    qu.pop();
    printf("%d:::\n",n);
    int i;
    for(i=0;i<edge[n].size();i++)
    {
        if(visit[edge [n][i]]==0)
        {
            qu.push(edge[n][i]);
            visit[edge[n][i]]=visit[n]+1;
            printf("%d  %d\n",edge[n][i],visit[edge[n][i]]);
        }

    }
    cout<<endl;
    bfs(qu.front());
    return;

}
int main()
{
    int N,E,x,y,i;
    scanf("%d %d",&N,&E);
    for(i=1; i<=E; i++)
    {
        scanf("%d%d",&x,&y);

        edge[x].push_back(y);
        edge[y].push_back(x);

    }
    visit[1]=1;
    qu.push(1);
    bfs(1);

}
