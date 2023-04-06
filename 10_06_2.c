#include<stdio.h>
int main()
{
int t,i,l;
double r,w,area1,area2;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
  r=0,w=0,area1=0,area2=0;
  scanf("%d",&l);
  r=(double)l*(2.0/10.0);
  w= (double)l*(6.0/10.0);
  area1=3.14159265359*r*r;
  area2=(l*w)-area1;
 printf("%.2lf %.2lf\n",area1,area2);
}
return 0;
}