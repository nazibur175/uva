#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[100],b[100];
int i,j,c;


for(i=0;i<100;i++)
{
  a[i]=(rand()%100)+1;
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