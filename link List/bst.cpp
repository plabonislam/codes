#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right;
    node()
    {
        left=NULL;
        right=NULL;
    }
};
node *root;

void insert_node (int roll)
{
    if(root==NULL)
    {
        root=new node();
        root->data=roll;
    }
    else
    {
        node *current=root;
        node *par;
        while(current!=NULL)
        {
            if(current->data > roll)
            {
             par=current;
             current=current->left;
            }
            else
            {
                par=current;
                current=current->right;
            }
        }
        node *newnode=new node();
        newnode->data=roll;
        if(newnode->data < par->data)
        {
         par->left=newnode;
        }
        else
        {
            par->right=newnode;
        }

    }

}
void print(node *current)
{
    if(current==NULL)
        return;

    print(current->left);
    cout<<current->data<<endl;
    print(current->right);

}
int main()
{
    insert_node(5);
    insert_node (7);
    insert_node (3);
    insert_node (188);
    node *cu=root;
    print(cu);

}
