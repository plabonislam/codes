#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

int main()
{
    int i,n,a,b;
   stack<int>st;
   queue<int>qu;
   //1 add last
   //2 move from front
   //3 queue first element
   cin>>n;
   for(i=1;i<=n;i++)
   {
       cin>>a;
       if(a==1)
       {
           cin>>b;
           qu.push(b);
       }
       else if (a==2)
       {
           qu.pop();
       }
       else if(a==3)
       {
           cout<<qu.front()<<endl;

       }

   }

  /* while(!st.empty())
   {
       cout<<st.top();
       st.pop();
   }
   while(!qu.empty())
   {
       cout<<qu.front();
       qu.pop();
   }
   */
}
