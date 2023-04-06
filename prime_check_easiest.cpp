#include<bits/stdc++.h>
using namespace std;
int input()
{
    int n;
    cin>>n;
    return n;
}
bool prime_chek(int n)
{
    if(n<=1)
        return false;
    if(n<=3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0||n%(i+2)==0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    t=input();
    while(t--)
    {
        int m=input();
        int n=input();
        for(int i=m;i<=n;i++)
            {
                if(prime_chek(i))
                    cout<<i<<endl;
            }
        //cout<<endl;
    }
}
