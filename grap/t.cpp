#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100];
    cin>>n;
  for(int i=1;i<=n;i++)
    cin>>arr[i];
    int   k=n;
  while(1)
  {
   cout<<k<<endl;
   if(k==arr[k])
    break;
   k=arr[k];
  }

}
