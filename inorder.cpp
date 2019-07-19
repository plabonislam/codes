#include<iostream>
#include<cstdlib>
using namespace std;
int k=0;
void inorder(int n)
{
    if(n==1 || n==2)
    {
        printf(" %d", n);
        return;
    }
    // in inorder, call left child, print parent call right child
    // inorder: call-print-call
    printf("%d",k);
    inorder(n-2);
    k++;
    printf(" %d", n);
    inorder(n-1);
    printf("YES");
      printf("%d",k);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("Inorder: ");
    inorder(n);
}
