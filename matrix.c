#include<stdio.h>
int main()
{
int i,j,R,C,a[10][10];
scanf("%d%d",&R,&C);
for(i=0;i<R;i++)
{
  for(j=0;j<C;j++)
  {
    scanf("%d",&a[i][j]);
  }
}
for(i=0;i<R;i++)
{
  for(j=0;j<C;j++)
  {
    printf("%d ",a[i][j]);
  }
  printf("\n");
}
return 0;
}