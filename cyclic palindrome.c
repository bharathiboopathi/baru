#include <stdio.h>

#include <string.h>

void main()
{
    printf("\n CYCLIC PALINDROME FUNCTION \n");

    char a[100];

    int i,j,x;

    printf("\n ENTER THE STRING: \n");

    gets(a);

    for(i=0;i<strlen(a);i++)
        {
            printf("\n");

            for(j=i+1;j<strlen(a);j++)

            printf("%c",a[j]);

            for(x=0;x<=i;x++)

            printf("%c",a[x]);

        }
}
