//1010

#include <stdio.h>

int main() {
	double a;
	double b;
	double c=0.0;
	double d=1.0;
	for(a = 2; a <= 30; a++) {
		for(b = 1; b <= a; b++)
			d = d * b;
		c = c + d;
		d = 1;
	}
	c++;
	printf("%.2e\n", c);
}
