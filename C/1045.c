//1045

#include <stdio.h>

int main() {
	int M = 0;
	int N = 0;
	int i = 0;
	int min = 0;
	scanf("%d %d", &M, &N);
	
	min = M < N ? M : N;
	
	for (i = min; i > 0; i--) {
		if (M % i == 0 && N % i == 0) {
			printf("%d ", i);
			break;
		}
	}
	
	for (i = min; i > 0; i++) {
		if (i % M == 0 && i % N == 0) {
			printf("%d", i);
			break;
		}
	}
	
	return 0;
}
