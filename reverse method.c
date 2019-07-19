
#include <stdio.h>
#include <string.h>


 char *reverse_string (char *s,int ct)
{
    int end=ct-1;
    int i;
     char *re = malloc(20);
    for(i=0;i<ct;i++)
    {
      re[i]=s[end];
      end--;
    }
    re[ct]='\0';
    return re;
}
int main()
{
    char str[10000], *p;
    int count=0;
    gets(str);

    while (str[count] != '\0')
      count++;
   p =reverse_string(str,count);
    printf("%s\n",p);
  //printf("%s",reverse_string(str,count));


return 0;
}


