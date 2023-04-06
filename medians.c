#include<stdio.h>
#include<math.h>
int main()
{

double a,b,c,s,area,x,y;
while(scanf("%lf%lf%lf",&a,&b,&c)!=0)
{
  if(a+b<=c || b+c<=a || c+a<=b)
  {
   printf("-1.000\n");
  }    
  else{
  area=0,s=0;
  s=(a+b+c)/2.0;
  y=s*(s-a);
  y=y*(s-b);
  y=y*(s-c);
  x=sqrt(y);
  area=(4.0/3.0)*x;
  printf("%.3lf\n",area);
  }
}
return 0;
}


//y=(s*(s-a)*(s-b)*(s-c));
//if(area>0)
 // else printf("-1\n");