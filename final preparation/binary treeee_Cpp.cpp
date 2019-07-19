
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

void add(node *root,int r);
void postfix(node *rec);
void prefix(node *rec);
void infix(node *rec);
void add_node(node *parent);


int main()
{
    int r,le,ri,p;
    node *root, tmp1,tmp2,*head;

    root= new node;


    root->info = 1;
    root->left = NULL;
    root->right = NULL;
    scanf("%d",&r);
    while(r--)
    {
       scanf("%d",&p);
        add(root,p);

    }

    printf("\ndisplay:\n");

    printf("\ninfix:\n");
    infix(root);



    return 0;
}

void add(node *rec,int r)
{

    if(rec->info == r)
    {
        add_node(rec);

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
    return;
}



void infix(node *rec)
{
    if(rec == NULL) return;
    infix(rec->left);
    printf("%c ",rec->info);
    infix(rec->right);
}
