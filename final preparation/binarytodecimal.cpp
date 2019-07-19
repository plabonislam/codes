#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,arr[10000],base,val,ct,sum;
    cin>>n;
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
    int k;


    for(i=0;i<n;i++){
            sum=0;
    ct=0;
    while(arr[i]!=0){
        k=arr[i]%10;
        arr[i]=arr[i]/10;
        val= pow(2,ct)*k;
        sum+=val;                                                                                         ;
        ct++;

    }

    cout<<sum<<endl;

}
}
