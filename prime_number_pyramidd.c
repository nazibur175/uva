#include<stdio.h>


int prime_test(int x)
{
  int flag=1;
  for(int i=2;i<=x/2;i++)
  {
    if(x%i==0)
    {
      flag=0;
      break;
    }
    else 
    flag=1;
  }
  if(flag==1 || x==2)
  {
    return (1);
  }
  else return (0);
}



int main()
{
int n=2;
for(int k=1;k<=4;k++)
 {
  for(int j=1;j<=k;j++)
  {
    while(prime_test(n)!=1)
    {
      n++;
    }
    printf("%d\t",n);
    n++;
  }
  printf("\n");
 }
 return 0;
}