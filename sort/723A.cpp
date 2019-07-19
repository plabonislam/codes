#include<iostream>
#include <algorithm>
using namespace std;
#define  max 10000
int main()
{
    int n,array[max],i,total;
    for(i=1;i<=3;i++)
        cin>>array[i];
    sort(array,array+4);
     total=(array[3]-array[2])+(array[2]-array[1]);
    cout<<total;

}
