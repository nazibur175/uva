#include<bits/stdc++.h>
using namespace std;
int a[1000000],b[1000000];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        a[i]=a[i]+a[i-1];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        cout<<a[y]-a[x-1]<<endl;

    }
}
