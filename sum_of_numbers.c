//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int main()
{
 int i,n,arr[100],sum=0;
 printf("enter size of array");
 scanf("%d",&n);
 printf("enter element to be added");
 for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
 for(i=0;i<n;i++)
{
 sum=sum+arr[i];
}
printf("sum of numbers are:%d \n",sum);
}
