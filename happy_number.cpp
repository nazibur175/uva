#include<iostream>
using namespace std;
int happy(int x)
{
  int n=x;
  int sum=0;
  while(n>0)
  {
    sum=sum+(n%10)*(n%10);
    n=n/10;
    if(sum==1)
      return 1;
  }
  if(sum==x)
      return 2;
  happy(sum);
  return 2;
}
int main()
{
  int t ;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int x;
    cin>>x;
    if(happy(x)==1)
      printf("Case #%d: x is a Happy number.\n",i,x);
    if(happy(x)==2)
      printf("Case #%d: x is an Unhappy number.\n",i,x);
  }
}