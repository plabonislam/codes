#include<iostream>
#include<cstdlib>
using namespace std;
void loop_forward(int arr[],int n,int i);
void loop_reverse(int arr[],int n,int i);
int main()
{

int i,n,arr[1000];
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>arr[i];
}
cout<<"forward loop"<<endl;
loop_forward(arr,n,1);
cout<<endl;
cout<<"reverse loop"<<endl;

loop_reverse(arr,n,1);

}
void loop_forward(int arr[],int n,int i)
{
    if(i>n)
        return;
    cout<<arr[i]<<" ";
    loop_forward(arr,n,i+1);


}
void loop_reverse(int arr[],int n,int i)
{
    if(i>n)
        return;
else{
        loop_reverse(arr,n,i+1);
         cout<<arr[i]<<" ";


}

}
