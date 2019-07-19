#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,arr[100][100],arr2[100][100],x,y;
    cin>>x>>y;
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            cin>>arr2[i][j];
        }
    }
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
int l,m;
l=0,m=0;
for(k=0;k<(x*y);k++){
        for(i=0; i<x; i++)
        {

            int t=arr[l][m];

            cout<<l<<" "<<m<<" "<<t<<endl;
            for(j=0; j<y; j++)
            {
                if(arr2[i][j]==t)
                {
                   // cout<<" HHHH"<<endl;
                    int p=arr2[l][m];
                    arr2[l][m]=t;
                    arr2[i][j]=p;
                  m=m+1;
                    cout<<m<<endl;
                    if(m==4)
                    {
                        m=0;
                        l=l+1;
                    }

                }


            }
        }
}

    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}
