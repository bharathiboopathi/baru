#include<stdio.h>
 #include<conio.h>
 int main()
 {
    char nm[20];
    int i,n;
    printf("Enter the your name \n");
    gets(nm);
    printf("How many time\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
printf("%d\t%s\n",i,nm);
    }
    return 0;
    }
