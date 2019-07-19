#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<string>edge[100];

int main()
{
    int E;
    string c,d;
    scanf("%d",&E);
    while(E--)
    {
    cin>>c;
    cin>>d;
    cout<<c<<" "<<d<<endl;
    edge[c].push_back(d);
    edge[d].push_back(c);
    }
    cin>>c;
    cin>>d;
//cheap_bfs(c,d);
}
