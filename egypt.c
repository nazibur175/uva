#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a==0&&b==0&&c==0)break;
        x= a*a;
        y= b*b;
        z= c*c;
        if((x+y==z)||(y+z==x)||(x+z==y))
        printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}