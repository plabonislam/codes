#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *right,*left;
};
struct node *createNode(int val) {
   struct node *temp =  (struct node *)malloc(sizeof(struct node));
   temp->data = val;
   temp->left = temp->right = NULL;
   return temp;
}

node *insertNode(node *current,int val)
{

    if(current==NULL)
    {
        return createNode(val);
    }

    else
    {
        if(val>current->data)
            current->right=insertNode(current->right,val);
        else
            current->left=insertNode(current->left,val);
    }
}
void print_preorder(node *current)
{
	if(current==NULL) return;
	cout<<current->data<<endl;
	print_preorder(current->left);
	print_preorder(current->right);

}
int main()
{
     int p,n;
   struct node *root = NULL;
   cout<<" enter your root"<<endl;
   cin>>p;
   root = insertNode(root, p);
   cout<<"how many number want to enter your tree"<<endl;
   cin>>n;
   while(n--){
        cin>>p;
   insertNode(root, p);
   }
  print_preorder(root);
}
