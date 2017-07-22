#include<stdio.h>
int main()
{
  char n;
  printf("Enter the character");
  scanf("%c",&n);
  if((n>='a'&&n<='z')||(n>='A'&&n<='Z'))
    printf("It is an alphabet");
  else
    printf("It is not an alphabet");
  return 0;
}
