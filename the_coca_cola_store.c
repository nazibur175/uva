#include<stdio.h>
int main()
{
int n,total,x;
while(scanf("%d",&n)!=EOF)
  {
    total=0;
  if(n==0)  break;
  while(n>2)
    {
    x=n%3;
    n=n/3;
    total=total+n;
    n=n+x;
    }
  if(n==2) {total=total+1;}
  printf("%d\n",total);
 }
return 0;
}