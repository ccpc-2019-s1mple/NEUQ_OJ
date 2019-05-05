//1061

#include <stdio.h>

int divisor(int num1, int num2) {
	int min = num1 < num2 ? num1 : num2;
	for (min; min > 0; min--) {
		if (num1 % min == 0 && num2 % min == 0) return min;
	}
}

int multiple(int num1, int num2) {
	int max = num1 < num2 ? num1 : num2;
	while (max++) {
		if (max % num1 == 0 && max % num2 == 0) return max;
	}
}

int main() {
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	printf("%d %d", divisor(num1, num2), multiple(num1, num2));
	return 0;
}
