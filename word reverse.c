#include <stdio.h>
#include <string.h>

void printReverse(char str[])
{
    int length = strlen(str);


    int i;
    char temp[10000];
    int    j=1;
    for (i = length - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {

            for(int t=j-1; t>=1; t--)
            {
                printf("%c",temp[t]);

            }
            j=1;
            printf(" ");
            str[i] = '\0';
        }

        else
        {
            temp[j] = str[i];
            j++;
        }

    }


    printf("%s", str);
}


int main()
{
    char str[] = "I can sss";
    printReverse(str);
    return 0;
}
