#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,n,arr[1000],d;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>arr[i];
        cout<<"enter number you want to find"<<endl;
        cin>>d;
    int s,e,m;
    s=1;
    e=n;
   int ct=0;
    while(s<=e){
        m= (s+e)/2;
        if(arr[m]==d)
        {
            ct=1;
             break;
        }

        else if(d < arr[m])
        {
            e=m;
            e--;
        }
        else if(d> arr[m])
        {
            s=m+1;
        }
    }
    if(ct==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
