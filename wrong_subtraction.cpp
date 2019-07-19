#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    while(k--)
    {
        int t=n%10;
        if(t==0)
            n=n/10;
         else
         {
             n--;
         }
    }
    cout<<n<<endl;
}

