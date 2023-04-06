#include<bits/stdc++.h>
//#include<math.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int c=0;
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    for(int k=j+1;k<n;k++)
    {
        if(a[i]+a[j]>=a[k])
        {
            cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
            c++;
        }
            
    }
    cout<<c<<endl;
}