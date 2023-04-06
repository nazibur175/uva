#include<stdio.h>
int main()
{
int n,c,i,j,last;
 while(scanf("%d",&n)!=EOF)
 { 
   i=0,j=0,c=1,last=0;
    while(c<=n)
    {
       i=i+1;
       for(j=0;j<=i/2;j++)
       {
          if(i%j==0)
          {
            if(j==2 || j==3 || j==5)
            {
              last=i;
              c=c+1;
            }
            else break;
          }
       }
    }
    printf("%d\n",last);
 }
return 0;
}