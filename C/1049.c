//1049

#include <stdio.h>

int main() {
	int A = 0;
	int B = 0;
	int C = 0;
	float i = 0.0;
	double result = 0.0;
	
	scanf("%d %d %d", &A, &B, &C);
	
	for (i = 1; i <= A; i++) {
		result = result + i;
	}
	
	for (i = 1; i <= B; i++) {
		result = result + i * i;
	}
	
	for (i = 1; i <= C; i++) {
		result = result + 1 / i;
	}
	
	printf("%.2lf", result);
	
	return 0;
}
