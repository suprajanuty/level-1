//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main() 
{
  float h,d,b;
  double vol;
  printf("please enter the dimensions of the tromboloid:\n");
  printf("h = ");
  scanf("%f",&h);
  printf("\nd = ");
  scanf("%f",&d);
  printf("\nb = ");
  scanf("%f",&b);

vol = ((h*d)+d)/(3*b);
printf("\n The volume of a tromboloid with h = %f, d = %f and b = %f is %If",h,d,b,vol);
return 0;
}
