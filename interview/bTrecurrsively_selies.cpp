
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

struct node{
                int info;
                struct node *left,*right;
            };

int flag;

void add(node *root,char r);

void infix(node *rec);
void add_node(node *parent);


int main()
{
    int r,le,ri;
    node *root, tmp1,tmp2,*head;

    root= new node;

    int p,n;
    cout<<"Input Your  Root node"<<endl;
    cin>>p>>n;
    root->info =p;

    root->left = NULL;
    root->right = NULL;
    n=n-1;
    cout<<"Enter Your Root Node"<<endl;
    while(n--)
    {
        cin>>r;
        if(r=='\n')
            break;
        flag = 0;
        add(root,r);
        if(!flag) break;
    }

    printf("\ndisplay:\n");

    printf("\ninfix:\n");
    infix(root);



    return 0;
}

void add(node *rec,char r)
{
    if(rec==NULL || flag ==1) return;
    if(rec->info == r)
    {
        add_node(rec);
        flag = 1;
    }
    else
    {
        add(rec->left,r);
        add(rec->right,r);
    }
    return;
}

void add_node(node *parent)
{
    int ch;
    cout << "input the left node:";
    cin>>ch;
    if(ch != '0')
    {
        node *tmp;
        tmp = new node;
        tmp->left = tmp->right = NULL;
        tmp->info = ch;
        parent->left = tmp;
    }
    cout << "input the right node:";
    cin>>ch;
    if(ch != '0')
    {
        node *tmp;
        tmp = new node;
        tmp->left = tmp->right = NULL;
        tmp->info = ch;
        parent->right = tmp;
    }
    cout<<"Select Current Left Or Right node  as Root "<<endl;

    return;
}


void infix(node *rec)
{
    if(rec == NULL) return;
    infix(rec->left);
    printf("%c ",rec->info);
    infix(rec->right);
}
