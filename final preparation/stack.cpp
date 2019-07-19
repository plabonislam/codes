

#include <bits/stdc++.h>
using namespace std;

int stackk[100],choice,n,top,x,i,t;

void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");

    }
    else
    {
        printf(" Enter a value to be pushed:");
       scanf("%d",&t);
        stackk[++top]=t;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stackk[top]);
        top--;
    }
}
void display()
{
    if(top>-1)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stackk[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}

int main()
{

    int k;

    //clrscr();
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    while(scanf("%d",&k))
    {
        if(k==1)
            display();
        else if(k==2)
            push();
        else
            pop();
    }

}

