#include<bits/stdc++.h>
using namespace std;
int arr[]= {1,2,3};
int vis[10];
int out[10];
int n=3;
void print()
{
    for(int i=0; i<n; i++)
    {
        cout<<out[i];
    }
    cout<<endl;
}
void call(int t)
{
    if(t==n)
    {
        print();
        return ;
    }
    for(int i=0; i<n; i++)
    {
        if(vis[i]==-1)
        {
            vis[i]=1;
            out[t]=arr[i];
            call(t+1);
            vis[i]=-1;
        }
    }
}
int main()
{
    memset(vis,-1,sizeof(vis));
    call(0);
}
