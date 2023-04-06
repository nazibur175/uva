#include<bits/stdc++.h>
using namespace std;
int main() {
	long long a,l,temp;
	int Case = 0;

	while(scanf("%lld %lld", &a, &l) == 2) {
		if(a < 0 && l < 0)
			break;
		int c = 1;
		temp = a;
		while(a != 1) {
			if(a&1)
				a = a*3+1;
			else
				a = a/2;
			if(a > l)
				break;
			c++;
		}
		printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n", ++Case, temp, l, c);
	}
    return 0;
}
