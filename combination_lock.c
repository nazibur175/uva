#include<stdio.h>
int main()
{
int a,b,c,d,sum,total;
while(scanf("%d%d%d%d",&a,&b,&c,&d)!=0)
{
  if(a==0 && b==0 && c==0 && d==0) break;

  sum=80;
  total=0;
  if(a>b) sum=sum+40+(b-a);
  else sum=sum+(b-a);
  sum=sum+40;
  if(b>c) sum=sum+40+(c-b);
  else sum=sum+(c-b);
  if(c>d) sum=sum+40+(d-c);
  else sum=sum+(d-c);
  total=sum*9;
  printf("%d\n",total);
}
return 0;
}