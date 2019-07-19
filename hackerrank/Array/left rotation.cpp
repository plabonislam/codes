#include<bits/stdc++.h>
using namespace std;
int main()
{

    int array[1000009],arr[1000009];
    int i,j,k,n,d;
    cin>>n>>d;
    for(i=0; i<n; i++)
        cin>>array[i];
    while(d--)
    {
        for(i=0; i<n; i++)
        {
            if(i==0)
            {
                k=array[0];
            }
            if(i!=n-1)
                array[i]=array[i+1];
            else if(i==n-1)
                array[i]=k;
        }
    }

    for(i=0; i<n; i++)
        cout<<array[i]<<" ";
}
