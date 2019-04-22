//1002

#include <stdio.h>

int main() {
	int A = 0;
	int B = 0;
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	int result[n];
	for (i; i < n; i++) {
		scanf("%d %d", &A, &B);
		result[i] = A + B;
	}

	for (i = 0; i < n; i++) {
		printf("%d\n", result[i]);
	}
	return 0;
}