#include <stdio.h>
#include <stdlib.h>




int main ()
{
    int n;
    int visit[1000000]= {0};

    int out[1000000];
    int values[] = {800000,25, 25, 25,25};




    int j=0,z=0,i=0;
    for( n = 0; n < 5; n++ )
    {

       if(visit[values[n]]==1)
               {
                   out[z]=values[n];
                   z++;
                   visit[values[n]]=2;

               }
               else if(visit[values[n]]==0)
               {
                   visit[values[n]]=1;
               }





    }

    for(i=0; i<z; i++)
    {
        printf("%d\t",out[i]);

    }

    return(0);
}
