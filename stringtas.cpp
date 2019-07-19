#include<iostream>
#include<string.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
char c;
int i;
    for( i=0;i<a.length();i++)
    {

         c=tolower(a[i]);
        if (c=='a')
        {
            a.erase(i,1);
            i--;

        }
         else if (c=='e')
        {
            a.erase(i,1);
            i--;
        }
        else if (c=='i')
        {
            a.erase(i,1);
            i--;
        }
        else if (c=='o')
        {
            a.erase(i,1);
            i--;

        }
         else if (c=='y')
        {
            a.erase(i,1);
            i--;
        }

        else if (c=='u')
        {
            a.erase(i,1);
            i--;
        }

        else
        {


            printf(".%c",c);

        }
    }



}
