#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c,s;
    while(scanf("%lld",&n)!=EOF,n)
    {
        c=0,s=0;
       while(s<n)
       {
           c++;
           s+=c;
       }
       if(s==n)
       {
           c++;
           s+=c;
       }
       printf("%lld %lld\n",s-n,c);
    }
}
