//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
void distance(float a1,float b1,float a2 ,float b2)
{
  float dist;
  dist=(sqrt((pow((a2-a1),2)+pow(b2-b1),2))));
  printf("distance between (%f,%f) and (%f,%f) is %f", a1,b1,a2,b2,dist);
}
int inputA()
{
  float a;
  printf("enter a value:");
  scanf("%f",&a);
  return a;
}
int inputB()
{
  float b;
  printf("enter b value:");
  scanf("%f",&b);
  return b;
}
int main()
{
  float a1,b1,a2,b2;
  a1= inputA();
  b1= inputB();
  a2= inputA();
  b2= inputB();
  distance(a1,b1,a2,b2);
  return 0;
}
