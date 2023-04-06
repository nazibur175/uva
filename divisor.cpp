#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,u,temp,c,max_value=0,max_number=0;
        cin>>l>>u;
        for(int i=l;i<=u;i++)
        {
            c=0;
            temp=sqrt(i);
            for(int j=1;j<=temp;j++)
            {
                if(i%j==0)
                {
                    c++ ;
                }
            }
            c=c*2;
            if(temp*temp==i)
                c-- ;
            if(c>max_number)
            {
                max_number=c;
                max_value=i;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n", l, u, max_value, max_number);
    }
}
