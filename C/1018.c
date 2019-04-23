//1018 Incorrect

#include <stdio.h>

int main() {
	int n;
	int i = 0;
	long long int A;
	long long int B;
	scanf("%d", &n);
	while (n--) {
		i++;
		scanf("%lld %lld", &A, &B);
		printf("case %d:\n%lld + %lld = %lld\n",i , A, B, A + B);
	}
	
	return 0;
} 
