#include<bits/stdc++.h>
using namespace std;

vector<pair<int,string> >vc;
bool sortbysecdesc(const pair<int,string> &a, const pair<int,string > &b)
{
        if(a.first==b.first)
            return a.second < b.second;

        return a.first >b.first;

       // cout<<a.first<<" "<<a.second<<" "<<b.second<<b.first<<endl;


}

int main()
{
    int n,t;
    string s;
    cin>>n;
    while(n--)
    {
       cin>>s>>t;
      vc.push_back(make_pair(t,s));
    }

    sort(vc.begin(),vc.end(),sortbysecdesc);

        for (auto x : vc)
        cout << x.second<<" "<<x.first<<endl;
}
