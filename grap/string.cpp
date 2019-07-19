
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str1[1000],str2[1000],s;
  int m,n;
  cin>>m>>n;
 for(int i=0;i<m;i++)
    cin>>str1[i];//main
 for(int j=0;j<n;j++)
    cin>>str2[j];//check
    int ct=0;
//  int l=str1.length();
  for(int i=0;i<n;i++)
    {
   // cout<<str2[i]<<endl;
 //  ct=0;
        for(int j=0;j<m;j++)
        {
            if(str2[i]==str1[j])
            {
               // cout<<str2[i]<<endl;
                str1[j]="p10p";
               // cout<<str1[j]<<endl;
                ct=0;
                break;
            }
            else if(str2[i]!=str1[j])
            {
                ct=1;

            }

        }
        if(ct==1)
            break;

    }

    if(ct==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

 // getline (cin, mystr);


//cout<<l;
  return 0;
}
