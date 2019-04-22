//1007

#include <stdio.h>

int main() {
	int number;
	int underCounter = 0;
	float total = 0.0;
	int i = 0;
	for (i; i < 20; i++) {
		scanf("%d", &number);
		if (number > 0) total = total + number;
		if (number < 0) underCounter++;
	}
	printf("%d\n%.2f", underCounter, total / (20 - underCounter));
	return 0;
}