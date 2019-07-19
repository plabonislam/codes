
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,arr[10000];
cin>>n;
i=0;
while(n!=0)
{
 arr[i++]=n%2;
 n=n/2;
}

for(int k=i-1;k>=0;k--)
{
    cout<<arr[k];
}
}
