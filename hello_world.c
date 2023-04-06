#include<stdio.h>
int main()
{
int n,count,x,c=0;
while(scanf("%d",&n)!=EOF)
{
  if(n<0) break;
  x=1,count=0;
   while(x<n)
   {
     x=x*2;
     count++;
   }
  c++;
   printf("Case %d: %d\n",c,count);
}
return 0;
}