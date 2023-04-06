#include<stdio.h>
#include<string.h>
int main()
{
int c=0;
char s[7];
char s1[]="Hajj",s2[]="Umrah";
while(scanf("%s",&s)!=EOF)
{
  c++;
  if(strcmp(s,"*")==0) break;
  else if( strcmp(s,s1)==0) printf("Case %d: Hajj-e-Akbar\n",c);
  else printf("Case %d: Hajj-e-Asghar\n",c);
}
return 0;
}
