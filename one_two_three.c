#include<stdio.h>
#include<string.h>
int main()
{
  int i,t,x;
  char s[20];
  
  scanf("%d",&t);
  while(t--)
  {
    x=0;
    scanf("%s",s);
    x=strlen(s);
    if (x > 3)
			printf("3\n");
		else {
			if(s[0] == 'o' && s[1] == 'n') printf("1\n");
			else if(s[0] == 'o' && s[2] == 'e') printf("1\n");
			else if(s[1] == 'n' && s[2] == 'e') printf("1\n");
			else printf("2\n");
		}
  }
return 0;
}