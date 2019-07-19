
#include<iostream>
using namespace std;
struct node {
   int data;
   struct node *left;
   struct node *right;
};
struct node *createNode(int val) {
   struct node *temp =  (struct node *)malloc(sizeof(struct node));
   temp->data = val;
   temp->left = temp->right = NULL;
   return temp;
}
void inorder(struct node *root) {
   if (root != NULL) {
      inorder(root->left);
      cout<<root->data<<" ";
      inorder(root->right);
   }
}

void preorder(struct node *root) {
   if (root != NULL) {
        cout<<root->data<<" ";
      preorder(root->left);
        preorder(root->right);
   }
}

void postorder(struct node *root) {
   if (root != NULL) {

      postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
   }
}
struct node* insertNode(struct node* node, int val) {
   if (node == NULL) return createNode(val);
   if (val < node->data)
      node->left  = insertNode(node->left, val);
   else if (val > node->data)
      node->right = insertNode(node->right, val);
   return node;
}
int main() {
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
   cout<<"In-Order traversal of the Binary Search Tree is: ";

   inorder(root);
   cout<<endl;
   cout<<"pre-Order traversal of the Binary Search Tree is: ";
   preorder(root);
   cout<<endl;
    cout<<"post-Order traversal of the Binary Search Tree is: ";
   postorder(root);
   return 0;
}
