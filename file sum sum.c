#include<stdio.h>
int main()
{
    FILE *ff;
    ff=fopen("input.txt","r");
    if(ff != NULL)
    {
        char line[BUFSIZ];
        int field,n;
        while(fgets(line,sizeof line,ff)!= NULL)
        {
            char *start=line;
            while(sscanf(start,"%d%n",&field,&n)==1)
            {
                fprintf("%d",field);
                start+=n;
            }
        }
    }
}
