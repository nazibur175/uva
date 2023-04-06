#include<stdio.h>
int main()
{
 int n;
 printf("Please Enter the size of array\n");
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++)
 {
  scanf("%d",a[i]);
 }
 return 0;
}