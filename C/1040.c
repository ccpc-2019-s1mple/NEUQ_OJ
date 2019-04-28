//1040

#include <stdio.h>

int main() {
	int A = 0;
	int B = 0;
	int C = 0;
	scanf("%d %d %d", &A, &B, &C);
	if (A > B) {
		if (A > C) printf("%d", A);
		if (C > A) printf("%d", C);
	}
	else {
		if (B > C) printf("%d", B);
		if (C > B) printf("%d", C);
	}
	
	return 0;
}
