
#include<iostream>
using namespace std;
int main()
{
    int n,t,c,ct=0,sum=0;
    cin>>n;
    cin>>t;
for(int i=1;i<n;i++)
{
    cin>>c;
    sum+=c;
    if(sum==t)
    ct=sum;
}
 if(ct!=0)
 cout<<"YES"<<endl;
 else
    cout<<"NO"<<endl;

}
