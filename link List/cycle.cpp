#include<bits/stdc++.h>
using namespace std;
struct node{
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

void print()
{
    node *current=root;
    while(current!=NULL)
    {
        cout<<current->data<<endl;
        current=current->next;
    }
}
int detect_cycle()
{
    if(!root)
        return 0;

    node *tort=root;
    node *hare=root;
    while(hare)
    {
        if(hare->next and hare->next->next and tort)
        {
            hare=hare->next->next;
        }
       else
           return 0;

        tort=tort->next;
       if(hare==tort)
        {
           cout<<"exist"<<endl;
           return 1;
            break;
        }
    }
}
int HasCycle(node *head) {


    node *slow = head;
    node *fast = head;

    while (fast  && fast->next and slow ){
        slow = slow->next;
        fast = fast->next->next;
        cout<<"GROW"<<slow->data<<endl;

        if (slow == fast){
            return 1;
        }
    }

    return 0;
}

int main()
{
  node  *head = NULL;
    append(20);
    append(45);
    append(12);
    append(42);
    append(90);
    append(67);
    append(15);
    append(28);
    append(64);
    append(85);
    append(42);

 head->next->next=head;
    print();
    int k=HasCycle(head);
    cout<<k<<endl;
}
