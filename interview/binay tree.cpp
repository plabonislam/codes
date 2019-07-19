
#include<bits/stdc++.h>
using namespace std;

int flag;

struct node
{
    int data;
    struct node *left,*right;

}*start=NULL;


void add_child(node *parent)
{
    int l,r;
    cout<<"give left data: ";
    node *left=new node;
    left->left=left->right=NULL;
    scanf("%d",&left->data);
    parent->left=left;

    cout<<"give right data: ";
    node *right=new node;
    right->left=right->right=NULL;
    scanf("%d",&right->data);
    parent->right=right;
}

void add_node(int p,node *temp)
{
    if(temp==NULL || flag==1) return;
    if(temp->data==p)
    {
        add_child(temp);
        flag=1;
    }
    else
    {
        add_node(p,temp->left);
        add_node(p,temp->right);
    }
}


void postfix(node *tmp)
{
    if(tmp==NULL) return;
    postfix(tmp->left);
    postfix(tmp->right);
    printf("%d ",tmp->data);
}


void prefix(node *tmp)
{
    if(tmp==NULL) return;
    printf("%d ",tmp->data);
    prefix(tmp->left);
    prefix(tmp->right);

}

void infix(node *tmp)
{
    if(tmp==NULL) return;
    infix(tmp->left);
    printf("%d ",tmp->data);
    infix(tmp->right);

}

int main()
{
    int i,j,k,l,p;
    node *tmp=new node;
    cout<<"give starting node: ";
    scanf("%d",&tmp->data);
    start=tmp;
    while(1)
    {
        cout<<"give node data: ";
        scanf("%d",&p);
        flag=0;
        add_node(p,start);
        if(flag==0) break;
    }

    cout<<"no data found"<<endl;
    cout<<"Postfix"<<endl;
    postfix(start);
    cout<<endl;
    cout<<"prefix"<<endl;
    prefix(start);
    cout<<endl;
    cout<<"infix"<<endl;
    infix(start);
}
