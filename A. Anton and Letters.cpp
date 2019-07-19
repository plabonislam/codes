#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,len,ct;
    string st,stcopy;
    cin>>st;
    getline (cin, st);
    len=st.length();

    ct=len;
    cout<<len;
    for(i=0; i<len; i++)
    {
        int found=0;
        if(st[i]==','||st[i]=='{'|| st[i]=='}')
        {
            ct--;
            continue;
        }
        else if(stcopy.length()==0)
        {
            stcopy +=st[i];
            continue;
        }

        else
        {
            int le=stcopy.length();

            for(j=0; j<le; j++)
            {
                if(st[i]!=stcopy[j])
                {
                    found=1;
                }
            }
        }


    }
    //cout<<ct;
}
