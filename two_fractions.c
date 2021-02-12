//WAP to find the sum of two fractions.
#include<stdio.h>
#include<conio.h>
typedef struct 
{
  int num;
  int deno;
} fract;
fract sum(fract,fract);
int main()
{
  int num1,deno1,num2,deno2;
  printf("enter fraction 1: the numerator and denominator;");
  scanf("%d%d",&num1,&deno1);
  printf("enter fraction 2: the numerator and denominator:");
  scanf("%d%d",&num2 ,&deno2);
fract f1={num1 ,deno1};
fract f2={num2 ,deno2};
fract result = sum(f1,f2);
printf("summation result=%d%d",result.num,result.deno);
getch();
return 0;
}
fract sum(fract f1,fract f2)
{
  fract result={(f1.num*f2.deno)+(f2.num*f1.deno),f1.deno*f2.deno};
return result;
}
