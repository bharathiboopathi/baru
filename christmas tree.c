#include<stdio.h>
int main()
{
      int limit = 30, temp;  
      int i, j;
      printf("\n");
      temp = limit/4;
      for(i = 1; i <= limit/4; i++)
      {
            printf("\t\t  ");
            for(j = 1; j < temp; j++)
            {
                  printf(" ");
            }              
            temp--;
            for(j = 1; j <= 2*i-1; j++)
            {
                  printf("*");
            }
            printf("\n");
      }
      temp = limit/3;
      for(i = 3; i <= limit/3; i++)
      {
            printf("\t     ");
            for(j = 1; j < temp; j++)
            {
                  printf(" ");
            }
            temp--;
            for(j = 1; j <= 2*i-1; j++)
            {
                  printf("*");
            }
            printf("\n");
      }
      temp = limit/2;
      for(i = 4; i <= limit/2; i++)
      {
            printf("\t");
            for(j = 1; j < temp; j++)
            {
                  printf(" ");
            }
            temp--;
            for(j = 1; j <= 2*i-1; j++)
            {
                  printf("*");
            }
            printf("\n");
      }
      for(i = 0; i < limit/3; i++)
      {
            printf("\t\t      ");
            printf("*****");
            printf("\n");
      }
      printf("\t\t  *************");
      printf("\n\t\t  *************");
      printf("\n");
      return 0;
}
