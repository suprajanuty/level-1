//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct coordinates {
 int x,y;
};
double distance(struct coordinates p,struct coordinates q)
{
  double d;
  d = sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y));
  return d;
}
int main()
{
  double d;
  struct coordinates p,q;
  printf("enter x and y coordinate of point p:");
  scanf("%d %d", &p.x,&p.y);
  printf("enter x and y coordinate of point q:");
  scanf("%d %d",&q.x,&q.y);
  d = distance(p,q);
  printf("distance between a and b: %If\n",d);
  return 0;
}
