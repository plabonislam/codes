
/*You are given a list of n-1 integers and these integers are in the range of 1 to n.
 There are no duplicates in list. One of the integers is missing in the list.
 Write an efficient code to find the missing integer.*/
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n,sum,i,j,a;
     cin>>n;
     n++;
    sum=(n*(n+1))/2;
    for(i=1;i<n;i++)
        {
            cin>>a;
            sum-=a;

        }
        cout<<sum<<endl;
 }

