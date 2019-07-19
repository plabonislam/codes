#include<iostream>
#include<cstdlib>
using namespace std;
#define mx 100001
int arr[mx];
int tree[mx*3];
void init(int node,int b,int e)
{

    if(b==e)
    {
        tree[node]=arr[b];
        return ;
    }
    int left=node*2;
    int right=node*2+1;
    int md=(b+e)/2;
    init(left,b,md);
    init(right,md+1,e);
    tree[node]=tree[left]+tree[right];
}

int query(int node,int b,int e,int i,int j)
{
    if(b>=i && e>=j)
    {
        return tree[node];
    }
    else if(b<i &&e <j)
        return 0;
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return p1+p2;
}

int main()
{
   int n,i;
   cin>>n;
   for(i=1;i<=n;i++)
    cin>>arr[i];
    init(1,1,n);
     for(i=1;i<=13;i++)
    cout<<tree[i]<<endl;

    cout<<"done"<<endl;
 cout << query(1, 1, n, 1, 3) << endl;

}
