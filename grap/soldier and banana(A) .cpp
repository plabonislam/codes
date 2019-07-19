
#include<bits/stdc++.h>
using namespace std;
int main()
{

 int a,b,c,sum=0;
 cin>>a>>b>>c;
for(int i=1;i<=c;i++)

{

     sum+=a*i;
 }
 if(sum>b)
    sum=sum-b;
  else
    sum=0;
    cout<<sum;
}
