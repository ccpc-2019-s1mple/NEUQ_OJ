//1050

#include <stdio.h>

int main() {
	int i = 100;
	int A = 0.0;
	int B = 0.0;
	int C = 0.0;
	for (i = 100; i < 1000; i++) {
		A = i / 100;
		B = i / 10 % 10;
		C = i % 10;
		if (A * A * A + B * B * B + C * C * C == i) printf("%.d\n", i);
	}
	
	return 0;
}
