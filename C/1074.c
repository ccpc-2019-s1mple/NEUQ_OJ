//1074

#include <stdio.h>

int main() {
	float a = 0.0;
	scanf("%f", &a);
	
	printf("  %6.2f\n", a);
	printf("  %6.2f   %6.2f\n", a, a);
	printf("  %6.2f   %6.2f   %6.2f\n", a, a, a);
	
	return 0;
}
