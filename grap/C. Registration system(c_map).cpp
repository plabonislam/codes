#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
#define max 100005
int main()
{
    // Initialize 2D array

    int n;
    string str[max];
    string sts[max];

    int k=0;
    cin>>n;
    //Taking Input from user
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
        mp[str[i]]++;

    }

    for(int i=0; i<n; i++)
    {
      int  t=0;

        if(mp[str[i]]==1)
                cout<<"OK"<<endl;
        else if(k==0)
        {
            sts[k++]=str[i];
            cout<<"OK"<<endl;
        }

        else if(mp[str[i]]>1)
        {
            for(int j=0; j<k; j++)
            {
                if(str[i]==sts[j])
                {
                    t++;
                }

            }
            if(t==0)
            {
                sts[k++]=str[i];
                cout<<"OK"<<endl;
            }
            else if(t!=0)
            {
                sts[k++]=str[i];
                cout<<str[i]<<t<<endl;
            }

        }
    }
}
