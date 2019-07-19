#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,array[500000],sum,ct=0,ds,de,na,ne,ns;
    cin>>n>>a;
    for(int i=0;i<n;i++)
        cin>>array[i];

        sort(array,array+n);

        if(array[0]>a)
        {
        sum=array[n-2]-a;
        }

        else if(array[n-1]<a)
            sum=a-array[1];
      else if(n==2 )
        {
           ds=a-array[0];
          // ds=abs(ds)+1;
           de=array[1]-a;
        //   de=abs(de)+1;
           ct=1;
        }

        else
        {
            ds=(array[1]- array[0]);
           // cout<<ds<<endl;
            de=array[n-1]-array[1];
          //  cout<<de;
            //starting value array 1 theke boro and end er moddhe
            if(a>array[1])
             {
                 na=a-array[1];//start to array[1] distance
                 ds=ds+na;
                 ne=array[n-1]-a;//start to end distance
                 if(ne<na)//end distance low then
                    de=ne+de;
                 else
                    de=na+de;

             }
             else
             {
              na=array[1]-a;//start to array[1] distance
              de=de+na;
              ns= a-array[0] ;// start to array[0 ] distance
              if(na<ns)
                ds=ds+na;
              else
                ds=ds+ns;
            }
            ct=1;

        }

    if(ct==1)
    {
        if(ds>de)
            sum=de;
        else
            sum=ds;
    }
    cout<<sum;

}
