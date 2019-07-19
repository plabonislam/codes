
#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
// Function to print all sub strings
void reversem (string & s)
{

    int t=0,i,j;
    char h;
    int    l=s.length();
    for(i=l-1,j=0; i>=l/2; i--,j++)
    {
        h=s[i];
        s[i]=s[j];
        s[j]=h;
    }

}

// Driver program to test above function
int main()
{
    string s,a[1000];
    cin>>s;
    int i,j,l,k,n,ct=0,w=0;
    n=s.length();
    k=0;
    for ( i = 0; i < n; i++)
    {
        for (int len = 1; len <= n - i; len++)
        {

            a[k]=s.substr(i,len);
            mp[a[k]]++;
            cout<<a[k]<<" "<<mp[a[k]]<<endl;
            k++;
        }
    }
    for(i=0; i<k; i++)
    {
        string pre=a[i];
        reversem(a[i]);

    }

    return 0;
}
