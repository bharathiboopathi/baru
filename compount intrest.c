#include<stdio.h>
#include<math.h>
int main()
{
int p,n;
float r,CI;
scanf("%d",&p);
scanf("%d",&n);
scanf("%f",&r);
CI=(p*(((pow(1+(r/100),n)))))-p;
printf("\nCI=%f",CI);
return 0;
}
