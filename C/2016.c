//2016

#include <stdio.h>

int main() {
	long long i = 0;
	long long l = 0,r = 0;
	scanf("%lld %lld", &l, &r);
	
	for (i = l; i <= r; i++) {
		if ((i | i + 1) > r) {
			printf("%lld", i);
			break;
		}
	}
	
	return 0;
}
