#include<stdio.h>
int main()
{
char s[1000000];
long long int n,x,y,c,count,i;
while(scanf("%lld",&n)!=EOF)
{
  if(n==0) break;
  x=0,c=0,y=0,count=0;
  y=n;
  printf("The parity of ");
  while(y>0)
  {
    x=y%2;
     s[c]=x;
    if(x==1) {count=count+1;}
    y=y/2;
    c++;
  }
 
  for(i=c-1;i>=0;i--)
  {
     printf("%lld",s[i]);
  }
  printf(" is %lld (mod 2).\n",count);
}
return 0;
}