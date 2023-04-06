#include<stdio.h>
int main()
{
int t,i,j,n,c1,c2,cmax;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
  scanf("%d",&n);
  {
    cmax=0;
    for(j=1;j<=n;j++)
    {
       
       scanf("%d",&c2);
       if(c2>cmax) {cmax=c2;}
    }
    printf("Case %d: %d\n",i,cmax);
  }
}
return 0;
}