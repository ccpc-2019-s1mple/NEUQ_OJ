//1075

#include <stdio.h>
#define MACRO_max(a,b,c)	(a>b?a:b)>c?(a>b?a:b):c

float Function_max(float a, float b, float c) {
	float max = a > b ? a : b;
	return max > c ? max : c;
}

int main() {
	float a = 0;
	float b = 0;
	float c = 0;
	scanf("%f %f %f", &a, &b, &c);
	float result = MACRO_max(a, b, c);
	printf("%.3f\n", Function_max(a, b, c));
	printf("%.3f\n", result);
}
