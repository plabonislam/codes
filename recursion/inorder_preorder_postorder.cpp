#include<iostream>
using namespace std;
int preorder(int n)
{
    cout<<n<<" ";
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    preorder(n-2);
    preorder(n-1);
}
int inorder(int n)
{
    if(n==1)
    {
        printf("%d ",n);
        return 1;
    }
    else if(n==2)
      {
        cout<<n<<" ";
        return 2;
      }
    inorder(n-2);
    printf("%d ",n);
    inorder(n-1);

}

int postorder(int n)
{
    if(n==1)
    {
        printf("%d ",n);
        return 1;
    }
    else if(n==2)
      {
        cout<<n<<" ";
        return 2;
      }
    postorder(n-2);
    postorder(n-1);
    printf("%d ",n);
}


int main()
{

    int n;
    scanf("%d",&n);
   cout<<"preorder: ";
   preorder(n);
   cout<<endl;
     cout<<" inorder:";
    inorder(n);
     cout<<endl;
     cout<<"postorder:";
     postorder(n);
      cout<<endl;
}

