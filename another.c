
#include <stdio.h>
#include <string.h>

char *reverse_string (char s[])
{


    char *re = malloc (20);
    int ct=0;

    while(s[ct]!='\0')
    {
        ct++;
    }
    int i,j;
    for(i=ct-1,j=0; i>=0; i--,j++)
    {
        re[j]=s[i];

    }
    return re;
}
int main()
{
    char str[1000],*p;
    gets(str);
   p= reverse_string(str);
    printf("%s",p);
}
