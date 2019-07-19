#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;

};
node *root=NULL;

void append(int roll)
{
    if(root==NULL)
    {
        root=new node();
        root->data=roll;
        root->next=NULL;
    }
    else
    {

        node *current=root;//copy of root node
        while(current->next!=NULL)//find the last node
        {
            current=current->next;
        }
        node *newnode=new node();
        newnode->data=roll;
        newnode->next=NULL;
        current->next=newnode;//link newnode to last node;
    }
}

void link_delete(int roll)
{
    node *current=root;
    node *previous=NULL;
    while(current->data!=roll)
    {
        previous=current;
        current=current->next;
    }
    if(current==root)
    {
        node *temp=root;
        root=root->next;
        delete(temp);
    }
    else
    {
        previous->next=current->next;
        delete(current);
    }
}

void insert_middle (int roll,int pos)
{
    node *current=root;
    node *previous=NULL;
    while(current->data!=pos)
    {
        previous=current;
        current=current->next;
    }
        node *newnode=new node();
        newnode->data=roll;
        newnode->next=NULL;
    if(root==current)
    {

      newnode->next=root->next;//
       root->next=newnode;//link node with root

    }
    else
    {


        previous->next=newnode;
        newnode->next=current;
    }
}


void print()
{
    node *current=root;
    while(current!=NULL)
    {
        cout<<current->data<<endl;
        current=current->next;
    }
}
int  main()
{
append(1);
append(3);
append(5);
append(7);
insert_middle(777,1);
insert_middle(77,3);
print();
link_delete(1);
print();
return 0;
}
