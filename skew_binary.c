#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
long long int n,sum,x,c=0;
char s[31];

while(scanf("%s",&s)!=EOF)
{
  x=0,c=0,sum=0,n=0;
  n=strlen(s);
  
  if(s[0]=='0' && n==1) break;
  for(int i=n-1;i>=0;i--)
  {
    c++;
    x=s[i]-48;
    sum=sum+ (pow(2,c)-1)*x;
    x=0;
  }
  
  printf("%lld\n",sum);
}
return 0;
}