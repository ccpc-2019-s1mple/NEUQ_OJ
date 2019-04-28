//1052

#include <stdio.h>

int main() {
	int n = 0;
	int temp = 0;
	float upper = 2.0;
	float bottom = 1.0;
	double result = 0.0;
	
	scanf("%d", &n);
	
	while (n--) {
		result = result + upper / bottom;
		temp = bottom;
		bottom = upper;
		upper = upper + temp;
	}
	
	printf("%.2lf", result);
	
	return 0;
}
