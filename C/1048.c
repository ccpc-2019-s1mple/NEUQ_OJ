//1048

#include <stdio.h>

int main() {
	int i = 0;
	int n = 0;
	int j = 0;
	long long a = 1;
	long long sum = 0;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			a = a * j;
		}
		sum = sum + a;
		a = 1;
	}
	
	printf("%lld", sum);
	
	return 0;
}
