#include <cstdio>
#include<vector>
#include<stack>
#include<iostream>
using namespace std;
#define MAX 10000
vector<int>edge[MAX];
stack<int>st;
int visit[10000]={0};


void dfs(int n)
{
    printf("node:%d",n);
    int i,j;
for (i=0;i<edge[n].size();i++)
{
    if(visit[edge[n][i]]==0)
    {
        visit[edge[n][i]]=1;
        printf("::%d\n",edge[n][i]);

        st.push(edge[n][i]);
        dfs(edge[n][i]);
    }
    cout<<endl;
}
    st.pop();
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
    st.push(1);
    dfs(1);

}
