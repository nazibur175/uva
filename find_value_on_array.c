#include<stdio.h>
int main()
{

int a[100]={1,2,3,3,4,4,3,4,7,8,7,8,9,1,4,12,12,23,23,45,45,6,6,3,4,
2,1,3,4,66,6,6,6,7,7,9,8,8,7,6,4,9,4,5,5,5,6,7,8,9,
1,12,12,66,45,5,2,3,23,4,7,6,6,7,7,66,66,8,8,24,8,6,7,8,76,
10,12,8,5,45,45,32,23,23,24,4,66,3,66,66,66,66,66,3,9,3,2,1,2,3};

int b[100];
int i,j,c;
for(i=0;i<100;i++)
{
  b[i]=a[i];
}
 
 for(i=0;i<100;i++)
 {
   for(j=0;j<100;j++)
   {
     if(a[i]==b[j])
     {
       if(i!=j && j>i)
       {
          b[j]=0;
       }
     }
   }
 }



 for(i=0;i<100;i++)
 {
   c=0;
   for(j=0;j<100;j++)
   {
     if(b[i]!=0)
     {
       if(b[i]==a[j])
       {
         c=c+1;
       }
     }
   }
   if(b[i]!=0)
   printf("%d(%d)\n",b[i],c);
 }
return 0;
}