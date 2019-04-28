//1041

#include <stdio.h>

int main() {
	int X = 0;
	
	scanf("%d", &X);
	
	if (X < 1) {
		printf("%d", X);
	}
	else if (X >= 1 && X < 10) {
		printf("%d", 2 * X - 1);
	}
	else {
		printf("%d", 3 * X - 11);
	}
	
	return 0;
}
