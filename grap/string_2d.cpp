#include<bits/stdc++.h>
using namespace std;
#define max 100005
int main()
{
    // Initialize 2D array

    int n;
    string str[max];
   int array[max]={0};
    cin>>n;
    //Taking Input from user
    for(int i=0; i<n; i++)
    {
        cin>>str[i];

    }


    for(int i=0; i<n; i++)
    {
        int t=0;
        int ct=0;
        for(int j=0; j<n; j++)
        {
            if(i==j)
                continue;
            else if(str[i]==str[j])
            {
                t++;
                str[j]=str[i]+to_string(t);

                //cout<<str[i]<<"halum"<<str[j]<<endl;
                array[j]=1;

            }
        }

        //  cout<<str[i]<<endl;
    }
    // Printing Strings stored in 2D array
    for (int i = 0; i < n; i++)
        {
            if(array[i]==1)
                cout<<str[i]<<endl;
            else
                cout<<"OK"<<endl;
        }

    return 0;
}
