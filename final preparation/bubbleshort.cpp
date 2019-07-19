#include <bits/stdc++.h>
using namespace std;
int main()
{

    int i,n,j,arr[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }

    for(i=0;i<n;i++)
        cout<<arr[i]<<endl;

}
