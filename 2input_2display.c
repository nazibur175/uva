#include<stdio.h>
int main()
{
int k,t,i,j,R,C,a[10][10];
scanf("%d",&t);
{
  for(k=1;k<=t;k++)
  {
scanf("%d%d",&R,&C);
for(i=1;i<=R;i++)
{
 
  for(j=1;j<=C;j++)
  {
    scanf("%d",&a[i][j]);
  }
}
printf("Matrix %d:\n",k);
for(i=1;i<=R;i++)
{
  
  for(j=1;j<=C;j++)
  {
    printf("%d ",a[i][j]);
  }
  printf("\n");
}
printf("\n");
  }
}
return 0;
}