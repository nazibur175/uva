#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int a,b,c,d;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a==0||b==0||c==0||d==0)
        {
            printf("Yes\n");
        }
        
        else if((a+b==0)||(a+c==0)||(a+d==0)||(b+c==0)||(b+d==0)||(c+d==0))
        {
            printf("Yes\n");
        }
        else if(a+b+c==0||a+c+d==0||a+b+d==0||b+c+d==0||a+b+c+d==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}