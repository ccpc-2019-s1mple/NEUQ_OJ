//1029

#include <stdio.h>

int main() {
	int A = 0;
	int B = 0;
	for (A = 0; A < 1333; A++) {
		B = 1333 - A;
		if ((B / 100 == A % 10) && (B % 100 / 10 == A % 100 / 10) && (B % 10 == A / 100)) {
			printf("%d+%d=1333\n", A, B);
		}
	}
}
