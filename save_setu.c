#include<stdio.h>
#include<string.h>
int main()
{
long int tk,total=0;
int i,t,n;
char s[7],s1[]="donate";
scanf("%d",&t);
for(i=1;i<=t;i++)
{
  scanf("%s",s);
  if(strcmp(s,s1)==0)
  {
    scanf("%ld",&tk);
    total=total+tk;
  }
  else 
  printf("%ld\n",total);
}
return 0;
}