#include<stdio.h>
int main()
{
int n,x,total;
while(scanf("%d",&n)!=EOF)
{
   total=n;
   while (n>2)
   {
     x=n/3;
     n=x+n%3;
     total=total+x;
   }
   if(n==2){ total=total+1;}
   printf("%d\n",total);
   
}
return 0;
}