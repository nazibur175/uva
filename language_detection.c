#include<stdio.h>
#include<string.h>
int main()
{
int c=0;
char s[14];
char se[]="HELLO",ss[]="HOLA",sg[]="HALLO",sf[]="BONJOUR",si[]="CIAO",sr[]="ZDRAVSTVUJTE",sb[]="#";
while(scanf("%s",&s)!=EOF)
{
  c++;
  if(strcmp(s,sb)==0) break;
  
  else if(strcmp(s,se)==0)
  {
    printf("Case %d: ENGLISH\n",c);
  }
  else if(strcmp(s,ss)==0)
  {
    printf("Case %d: SPANISH\n",c);
  }
  else if(strcmp(s,sg)==0)
  {
    printf("Case %d: GERMAN\n",c);
  }
  else if(strcmp(s,sf)==0)
  {
    printf("Case %d: FRENCH\n",c);
  }

else if(strcmp(s,si)==0)
  {
    printf("Case %d: ITALIAN\n",c);
  }

else if(strcmp(s,sr)==0)
  {
    printf("Case %d: RUSSIAN\n",c);
  }
else printf("Case %d: UNKNOWN\n",c);
}
return 0;
}