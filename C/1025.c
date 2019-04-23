//1025

#include <stdio.h>

int GCD(int a, int b) {
	int c = 1;
	while(a - b) {
		if (a & 1) {
			if (b & 1) {
				if (a > b) {
					a = (a - b) >> 1;
				}
				else {
					b = (b - a) >> 1;
				}
			}
			else {
				b >>= 1;
			}
		}
		else {
			if(b & 1) {
				a >>= 1;
			}
			else {
				c <<= 1;
				a >>= 1;
				b >>= 1;
			}
		}
	}
	return c * a;
}

int main() {
	int num1,num2;
	scanf("%d %d", &num1, &num2);
	printf("%d", GCD(num1, num2));
	return 0;
}