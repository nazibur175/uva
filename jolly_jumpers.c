#include<stdio.h>
#include<math.h>
int main()
{
int t,i,x,s,l,m,n,o;
int a[3001],b[3001];
while(scanf("%d",&t)!=EOF)
{
i=0,x=0,s=0,l=0;
while(t--)
{
 scanf("%d",&a[i]);
 b[i]=a[i];
 i++;
}
for(int j=0;j<i-1;j++)
{
  x=abs(a[j]-b[j+1]);
  //printf("%d\n",x);
  for(int k=0;k<i;k++)
  {
    if(x==a[k])
    {
      l++;
    }
  }
  x=0;
}
if(l==i-1)
  printf("Jolly\n");
  else printf("Not jolly\n");
}
return 0;
}