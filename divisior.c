#include<stdio.h>
int main()
{
long long int i,j,t,n,k,s,x;
scanf("%lld",&t);
for(i=1;i<=t;i++)
{
  s=0;
  scanf("%lld%lld",&n,&k);
  for(j=1;j<=n/2;j++)
  {
    if(n%j==0 && j%k!=0)
    {
      s=s+j;
    }
  }
  if(n%k!=0) {s=s+n;}
  printf("%lld\n",s);
}
return 0;
}