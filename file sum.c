#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file,*fi;

    int  sl;


    /*  open the file for reading */
    file = fopen("input.txt", "r");
    fi=fopen("output.txt","w");
    printf("exist");
    int sum=0,x;
    while(!feof(file))
    {
        fscanf(file,"%d",&x);
       sum+=x;
       printf("%d\n",x);

    }
    sum=sum-x;
    fprintf(fi,"%d",sum);

    fclose(file);

}fclose(fi);
