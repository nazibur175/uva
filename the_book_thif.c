#include<stdio.h>
int main()
{
long long int x,s,c;
while(scanf("%lld",&x)!=EOF)
{
  if(x==0) break;
  c=0;
  s=0;
  while(s<x)
  {
    c=c+1;
    s=s+c;
  }
  if(x==s)
  {
    c=c+1;
    s=s+c;
  }
  printf("%lld %lld\n",(s-x),c);
}
return 0;
}