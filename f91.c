#include <stdio.h>

long long int main()
{
    int n;
    while(scanf("%lld", &n) && n!=0)
    {
            if(n>=101)
            printf("f91(%lld) = %lld\n", n, n-10);
    else
        printf("f91(%lld) = 91\n", n);
    }
    return 0;
}