#include<bits/stdc++.h>
int main()
{
int n,i,a,b,c;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  int x,y;
  cin>>x>>y;
  int sum=0;
  for(int j=x;j<=y;j++)
  {
      if(j%2==1)
        sum+=j;
  }
  printf("Case %d: %d\n",i,sum);

}
return 0;
}
