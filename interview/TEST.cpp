#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    int *p;
    x=5;
    y=10;
    p=&x;
    printf("%d %d\n",x,*p);
    printf("%d  %d %d",&x,&y,p);
}
