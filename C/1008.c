//1008

#include <stdio.h>

int main() {
	int num1 = 0;
	int num2 = 0;
	int min = 0;
	int i = 0;
	scanf("%d %d", &num1, &num2);
	min = num1 < num2 ? num1 : num2;
	for (i = min; i > 0; i--) {
		if (num1 % i == 0 && num2 % i == 0) {
			printf("%d\n", i);
			break;
		}
	}
	
	while (1) {
		i++;
		if (i % num1 == 0 && i % num2 == 0) {
			printf("%d", i);
			break;
		}
	}
	
	return 0;
}