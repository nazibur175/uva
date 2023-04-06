#include<stdio.h>
int main()
{
int i,j,k,R,C,a[10][10],b[10][10],sum[10][10],sub[10][10],mul[10][10],mul2[10][10];
printf("Enter the row & column number of Matrix A & B:\n");
scanf("%d%d",&R,&C);


printf("Enter the  values of Matrix A:\n");
for(i=1;i<=R;i++)
{
  for(j=1;j<=C;j++)
  {
    scanf("%d",&a[i][j]);
  }
}


printf("Enter the  values of Matrix B:\n");
for(i=1;i<=R;i++)
{
  for(j=1;j<=C;j++)
  {
    scanf("%d",&b[i][j]);
  }
}



printf("Matrix A:\n");
for(i=1;i<=R;i++)
{
  for(j=1;j<=C;j++)
  {
    printf("%d\t",a[i][j]);
  }
  printf("\n");
}



printf("Matrix B:\n");
for(i=1;i<=R;i++)
{
  for(j=1;j<=C;j++)
  {
    printf("%d\t",b[i][j]);
  }
  printf("\n");
}




printf("A+B:\n");
for(i=1;i<=R;i++)
{
  for(j=1;j<=C;j++)
  {
 sum[i][j]=a[i][j]+b[i][j];
 printf("%d\t",sum[i][j]);
  }
printf("\n");
}




printf("A-B:\n");
for(i=1;i<=R;i++)
{
  for(j=1;j<=C;j++)
  {
 sub[i][j]=a[i][j]-b[i][j];
 printf("%d\t",sub[i][j]);
  }
printf("\n");
}




printf("A*B:\n");
for(i=1;i<=R;i++)
{
  for(j=1;j<=C;j++)
  {
    sum[i][j]=0,0;
    for(k=1;k<=C;k++)
    {
      mul[j][k]=a[i][k]*b[k][j];
      sum[i][j]=sum[i][j]+mul[j][k];
    }
    printf("%d\t",sum[i][j]);
  }
  printf("\n");
}
return 0;
}