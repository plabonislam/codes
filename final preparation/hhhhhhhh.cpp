
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    vector<node*>list;

};

node *start = new node();



void push(node *n, int par,int chld)
{
    // cout<<"sdf== "<<n->val<< " "<<par<<"sd"<<endl;
    if(n->val == par)
    {
        printf("Data saved successfully\n");
        node *no = new node();
        no->val=chld;
        n->list.push_back(no);
        return;
    }
    else
    {
        for(int i=0; i< n->list.size(); i++)
        {
            push(n->list[i], par, chld);
        }
    }

}

node* prnt1(node *n,int par)
{
    if(n->val==par)
        return n;
    else{
        for(int i=0; i< n->list.size(); i++)
        {
            node *p=prnt1(n->list[i], par);
            if(p!=NULL)
                return p;
        }
        return NULL;
    }
}
int main()
{
    start->val=1;
    printf("Starting node value is 1\n");
    printf("To insert a value, give mode 1, followed by parent,followed by child\n");
    printf("To find if a path is valid, give mode 2, followed by ancestor,followed by child\n");
    int mode;
    int par,chld;
    while(scanf("%d %d %d",&mode, &par, &chld)!=EOF)
    {
        if(mode==1)
        {
            push(start,par,chld);
        }
        else
        {
            node *p=prnt1(start,par);
            int a=0;
            if(p!=NULL)
            {
                node *c=prnt1(p,chld);
                if(c!=NULL)
                    printf("found\n"),a=1;
            }
            if(a==0)
                printf("not found\n");
        }
    }
}
