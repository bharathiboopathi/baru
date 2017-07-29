#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the num");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is big");
    }if(b>a&&b>c)
    {
        printf("b is big");
    }else
    printf("c is big");
    return 0;
}
