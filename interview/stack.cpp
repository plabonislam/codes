
#include<stdio.h>

int stack[100],choice,n,top,x,i;


void push()
{
    int t;
    if(top>=n)
    {
        printf("STACK is over flow\n");

    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&t);
        stack[top]=t;
        top++;
    }
}
void pop()
{
    if(top==0)
    {
        printf("Stack is under flow\n");
    }
    else
    {
        top--;
        printf("The popped elements is %d\n",stack[top]);

    }
}
void topp()
{
    if(top==0)
       printf("empty\n");
    else
    printf("%d\n",stack[top-1]);
}
void display()
{
    if(top>0)
    {
        printf("The elements in STACK \n");
        for(i=top-1; i>=0; i--)
            printf("%d",stack[i]);

        printf("\n");
    }
    else if(top==0)
    {
        printf("The STACK is empty\n");
    }

}


int main()
{
    //clrscr();
    top=0;
    int js;
    printf("Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);

    printf("input 1 for display\n");
    printf("input 2 for pop\n");
    printf("input 3 for top\n");
    printf("input any number to push except 1,2 or 3\n");
    printf("\t enter your choice:");
   while(scanf("%d",&js)){
    if(js==1)
    {
        display();
    }
    else if(js==2)
    {
        pop();
    }
    else if(js==3)
    {
        topp();
    }
    else
        push();
        printf("\tenter next choice\n");
   }
}

