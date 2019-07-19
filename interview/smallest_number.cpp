
/*problem   Find the smallest positive integer value
that cannot be represented as sum of any subset of a given array*/

/* explanation Given a sorted array (sorted in non-decreasing order) of positive numbers,
find the smallest positive integer value that cannot be represented
as sum of elements of any subset of given set.*/

/* Input:  arr[] = {1, 3, 6, 10, 11, 15};
Output: 2

Input:  arr[] = {1, 1, 1, 1};
Output: 5

Input:  arr[] = {1, 1, 3, 4};
Output: 10

Input:  arr[] = {1, 2, 5, 10, 20, 40};
Output: 4

Input:  arr[] = {1, 2, 3, 4, 5, 6};
Output: 22
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,1,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    //cout<<n<<endl;
    int res=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>res)
            break;
        res+=arr[i];
    }
cout<<res<<endl;
}

