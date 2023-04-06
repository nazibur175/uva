#include<stdio.h>
int main()
{
  int a[8]={50,60,70,80,90,99,98,70} ;
  int i,s;

scanf("%d",&s);
for(i=1;i<=8;i++)
{
  if(a[i]==s) printf("%d\n",i);
}
return 0;
}