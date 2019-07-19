#include<bits/stdc++.h>
using namespace std;

int main()
{
 int s,n,a,b;
while(cin>>s>>n)
{
   vector<pair<int,int> >vc;
 for(int i=0;i<n;i++)
 {
     cin>>a;
     cin>>b;
     vc.push_back(make_pair(a,b));
 }
 sort(vc.begin(),vc.end());
 int ct=0;
for(int i=0;i<n;i++)
{
    if(vc[i].first<s)
    {
        s=s+vc[i].second;
    }
    else
       {
           ct=1;
           break;
       }


}
if(ct==1)
    cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;

}
}
