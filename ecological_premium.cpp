#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
while(t--)
    {
        int n;
        int sum=0;
        cin>>n;
        while(n--)
        {
            int a,b,c;
            cin>>a>>b>>c;
            sum=sum+(a*c);
        }
        cout<<sum<<endl;
    }
    return 0;
}