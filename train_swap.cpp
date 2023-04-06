#include<iostream>
using namespace std;
int bubbleSort(int a[],int n)
{
    int temp=0;
    int c;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1] )
               {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp ;
                    c++ ;
               }
        }
    }
    return c;
}
int main()

{
    
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     cout<<"Optimal train swapping takes "<<bubbleSort(a,n)<<" swaps."<<endl;

    }
    
    
}
