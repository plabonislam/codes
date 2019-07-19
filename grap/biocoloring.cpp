#include<iostream>
#include <vector>
#include <queue>
using namespace std;
#define Max 10000
vector<int>edge[Max];
int visit[Max]={0};
queue<int>qu;
int bicolor_bfs(int n)
{
    if(qu.empty())
    {
        return 1;
    }
    qu.pop();

    for(int i=0;i<edge[n].size();i++)
    {
printf(" %d inner ::%d\n",n,edge[n][i]);
        if(visit[edge[n][i]]==0)
        {

            if(visit[n]==1)
            visit[edge[n][i]]=2;
            else
                visit[edge[n][i]]=1;
            qu.push(edge[n][i]);


        }
        else if(visit[edge[n][i]]==visit[n])
        {
            printf("yes %d",visit[n]);
            printf(" %d outter ::%d\n",n,edge[n][i]);
           return 2;
        }
        printf("%d %d\n",visit[n],visit[edge[n][i]]);
    }
    bicolor_bfs(qu.front());

}
int main()
{
    int N,E,c,d,i;
    scanf("%d%d",&N,&E);
    for(i=1;i<=E;i++)
    {
        scanf("%d%d",&c,&d);
        edge[c].push_back(d);
        edge[d].push_back(c);
    }


    visit[0]=1;
    qu.push(0);
   int j= bicolor_bfs(0);
   cout<<j<<endl;
   if(j==2)
    cout<<"not color"<<endl;
   else
    cout<<"bicolor"<<endl;
}
