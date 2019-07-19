
#include <bits/stdc++.h>
using namespace std;


int vis[10000000];
map<int,int>name;
int main()
{
    int i,n,ara[100000];
    scanf("%d",&n);
    for(i=1;i<n;i++)
        scanf("%d",&ara[i]);
    for( i=1;i<=n;i++)
    {
        vis[ara[i]]++;
        name[ara[i]]++;//works if ara value is > 10^7
    }


}
