#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,ans;
    while (cin >> n)
    {
        n = n / 2 + 1;
        n = n * n;
        ans=(n*2-1)+((n-1)*2-1)+((n-3)*2+1);
        cout<<ans<<endl;
    }
}