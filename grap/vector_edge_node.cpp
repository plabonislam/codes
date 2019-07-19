#include<cstdio>
#include <iostream>
#include<vector>
using namespace std;
#define MAX 10000
vector <int>edge[MAX];
int main()
{
    int N,E,i,j,x,y;
    scanf("%d%d",&N,&E);
    for(i=0;i<E;i++)
    {
    scanf("%d%d",&x,&y);
    edge[x].push_back(y);
    edge[y].push_back(x);
    }

    for(j=1; j<=N; j++)
    {

        printf("%d :",j);

        for(i=0; i < edge[j].size() ; i++)
        {

            printf("%d ",edge[j][i]);
        }
        cout<<endl;
    }
}
