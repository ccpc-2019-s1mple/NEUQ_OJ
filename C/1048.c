//1048

#include <stdio.h>

int main() {
	int n = 0;
	double a;
	double b;
	double c = 0.0;
	double d = 1.0;
	scanf("%d", &n);
	for(a = 2; a <= n; a++) {
		for(b = 1; b <= a; b++)
			d = d * b;
		c = c + d;
		d = 1;
	}
	c++;
	printf("%.0f\n", c);
}
