#include<bits/stdc++.h>
using namespace std;

void divisor(vector<int>&v)
{
    int n=10000000;
    int i,j;
    for(int i=0;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            v[j].push_back(i);
        }
    }
}


void display(vector<int>&v)
{
    for(auto x:v)
        cout<<x<<endl;
    cout<<endl;
}


int main()
{
    vector<int>v[10000002];
    int i;
    cout<<"Enter any number for find divisor"<<endl;
    cin>>i;
    divisor(v);
    display(v[i]);

}
