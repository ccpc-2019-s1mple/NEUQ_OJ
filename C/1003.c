//1003

#include <stdio.h>

int main() {
	int A = 0;
	int B = 0;
	int i = 0;
	int j = 0;
	int result[100];
	while (1) {
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0) break;
		result[i] = A + B;
		i++;
	}

	for (j = 0; j < i; j++) {
		printf("%d\n", result[j]);
	}
	return 0;
}