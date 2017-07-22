#include<stdio.h>
int main()
{
    char n;
    printf("enter the char:");
    scanf("%c",&n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
    {
        printf("vowel");
    }else
    printf("consonant");
    return 0;
}
