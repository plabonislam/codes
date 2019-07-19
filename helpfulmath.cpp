#include <iostream>
#include<string.h>
#include <algorithm>

using namespace std;
int main()
{
    string a;
    int arr[3000];
    int i,j,t;
    cin>>a;
    for(i=0,j=0;i<a.length();i=i+2,j++)
    {
        arr[j]=a[i]-'0';

    }
t=a.length()/2;
sort(arr,arr+t+1);
for(i=0;i<t;i++)
{
    cout<<arr[i]<<"+";
}
cout<<arr[t];
}
