
#include<bits/stdc++.h>
using namespace std;

char kt;

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


else{
 //    printf("enter L or R");
    if(kt=='R')
    {
        current->right=insertNode(current->right,val);
    }
    else if(kt=='L')
            current->left=insertNode(current->left,val);

}


}
void print_preorder(node *current)
{
	if(current==NULL) return;

	print_preorder(current->left);
	cout<<current->data<<endl;
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
        printf("enter the number");
        cin>>p;
        printf("enter left or Right");
   cin>>kt;
   insertNode(root, p);
   }
  print_preorder(root);
}
