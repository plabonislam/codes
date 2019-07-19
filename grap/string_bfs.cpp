#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;
#define max 10000
vector<int>edge[max];
queue<int>qu;
map<string,int>mp;
map<int,string>mit;
int visit[max]={0};
int solve[max]={0};
int k=0;
int str_bfs(int n,int d)
{
    if(qu.empty())
        return 1;
    qu.pop();
    for(int i=0;i<edge[n].size();i++)
    {

        if(visit[edge[n][i]]==0)
        {
            solve[++k]=edge[n][i];
            visit[edge[n][i]]=1;
            qu.push(edge[n][i]);
            printf("%d::::inn %d\n",n,edge[n][i]);
        }
        if(edge[n][i]==d)
        {
            return  2;
        }

    }
    str_bfs(qu.front(),d);
}


int main()
{
int E,ct=0,s,d;
string a,b;
scanf("%d",&E);

while(E--)
{

    cin>>a;
    cin>>b;
   // cout<<a<<" "<<b<<endl;
    if(mp[a]==0)
    {
        mp[a]=++ct;
        mit[ct]=a;
    }
    if(mp[b]==0)
    {
        mp[b]=++ct;
        mit[ct]=b;
    }
    edge[mp[b]].push_back(mp[a]);
    edge[mp[a]].push_back(mp[b]);
}
cin>>a;
cin>>b;
s=mp[a];
d=mp[b];
cout<<s<<" "<<d<<endl;
visit[s]=1;
solve[k]=s;
qu.push(s);
int t=str_bfs(s,d);
if(t==1)
    cout<<"no route"<<endl;
else if(t==2)
    cout<<"possible"<<endl;
}
