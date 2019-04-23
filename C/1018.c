//1018 Untested

#include <stdio.h>

int main() {
	unsigned double A[100] = {0.0};
	unsigned double B[100] = {0.0};
	int i = 0;
	int j = 0;
	scanf("%d", i);
	j = i;
	for (i; i > 0; i--) {
		scanf("%f %f", &A[100 - i], &B[100 - i]);
	}

	for (i; i < j; i++) {
		printf("Case %d:\n", i + 1);
		printf("%.0f + %.0f = %.0f", A[i], B[i], A[i] + B[i]);
	}
}