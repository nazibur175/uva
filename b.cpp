#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        float avg=0;
        avg=float(x+y)/2;
        if(avg>z)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}