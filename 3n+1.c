#include<stdio.h>
int main()
{
int a,b,i,c=1,x=0,y=0,j=0,k=0;
while(scanf("%d%d",&a,&b)==2)
{
  
  if(a>0 && a<1000000 && b>0 && b< 1000000)
  {
   x=0;
   y=0;
   j=a;
   k=b;
   if(a>b)
    {
     j=b;
     k=a;
    }
  for(i=j;i<=k;i++)
  {
     c=1;
     x=i;
     while(x!=1)
       {   
         if(x%2==0) x=x/2;
         else  x=x*3+1;
         c++;
       }
      if(y<c) y=c;
  }
    printf("%d %d %d\n",a,b,y);
}
}
return 0;
}