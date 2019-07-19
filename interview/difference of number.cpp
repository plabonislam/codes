#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100],max=0,min=24789318;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int diff=abs(arr[i]-arr[j]);
            printf("%d %d %d\n",arr[i],arr[j],diff);

            if(arr[j]>max)
                max=arr[j];
            if(arr[j]<min)
                min=arr[j];

        }
    }
    cout<<max<<" "<<min<<endl;
}
