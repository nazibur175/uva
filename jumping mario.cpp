#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int max_jump=0,min_jump=0;
        for(int j=0;j<n-1;j++)
        {
            if(a[j+1]>a[j])
                max_jump++;
            else if(a[j+1]<a[j])
                min_jump++;
        }
        printf("Case %d: %d %d\n",i,max_jump,min_jump);
    }

}
