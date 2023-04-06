#include<stdio.h>
#include<math.h>
int main()
{
int t;
long long int n,x;
scanf("%d",&t);
while(t--)
{
  scanf("%lld",&n);
  x=(-1+sqrt(1+8*n))/2;
  printf("%lld\n",x);
  x=0;
}
return 0;
}