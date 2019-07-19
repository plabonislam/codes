#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,n,m,i,j,t;
    cin>>n>>m;
    c=0;
    t=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(i%2==0)
            {
                if(c==0 && j==m)
                {
                    cout<<'#';
                    c=1;
                }
                else if(c==1 && j==1)
                {
                    cout<<'#';
                    t=1;
                }
                else
                    cout<<'.';
            }
            else
                cout<<'#';
        }
        if(t==1)
            c=0;
            t=0;
        cout<<endl;
    }
}
