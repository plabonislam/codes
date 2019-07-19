#include<bits/stdc++.h>

using namespace std;


 struct node {
      int roll;
      node *next;

  };

node *root=NULL,*startnode,*tailnode;


node* detectCycle(node* A) {
    if(!A->next)return NULL;

    node *tortoise=A;
    node *hare=A;

    //check if there is a cycle
    while(hare){
        if(hare->next and hare->next->next)
            hare=hare->next->next;
        else
            return NULL; //no cycle
        tortoise=tortoise->next;
        if(hare==tortoise)break; //cycle exists
    }

    node* tortoise2 = A;
    while(tortoise2 != tortoise){
        tortoise2 = tortoise2->next;
        tortoise = tortoise->next;
    }
    return tortoise;
}


void append(int roll)
{
	if(root==NULL) //If the list is empty
	{
		root=new node();
		root->roll=roll;
		root->next=NULL;
	}
	else
	{
		node *current_node=root; //make a copy of root node
		while(current_node->next!=NULL) //Find the last node
		{
			current_node=current_node->next; //go to next address
		}
		node *newnode = new node(); //create a new node

		newnode->roll=roll;
		newnode->next=NULL;

		current_node->next=newnode; //link the last node with new node

		if(roll==2){
            startnode = newnode;
		}
		else if(roll==6){
            tailnode = newnode;
            tailnode->next = startnode;
		}
	}
}
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node =
          (struct node*) malloc(sizeof(struct node));

    /* put in the data  */
    new_node->roll  = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}

void print()
{
		node *current_node=root;
		node *fast=root;
		fast=fast->next;
		cout<<"PLA";
		int c=1;
		while(current_node!=fast) //loop until you reach null
		{
		    c++;
		    if(c==7)
                break;
		    cout<<"PLABON";
		    if(fast!=NULL)
            {
                fast=fast->next;
            }
			printf("%d\n",current_node->roll);
			current_node=current_node->next;
		}
}

int main(){

	/*append(1);
	append(2);
	append(3);
	append(4);
	append(6);
	*/

	struct node* head = NULL;

    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);




	print();

	node *newnode = detectCycle(root);
	printf("%d",newnode->roll);
    return 0;
}



