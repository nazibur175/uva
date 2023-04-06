#include<stdio.h>
int main()
{
 int n,k,total,x;
 
 while (scanf("%d%d",&n,&k)!=EOF)
 {
    total=n;
    x=0;
    while (n>=k)
    {
      x=n/k;
      n=(x+n%k);
      total=total+x;
    }
    printf("%d\n",total);
 }
  return 0;
}