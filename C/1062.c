//1062

#include <math.h>
#include <stdio.h>

void Tworoot(int a, int b, int c, int Det) {
	printf("x1=%f+%f x2=%f-%f", b / 2 * a, sqrt(Det), b / 2 * a, sqrt(Det));
}

void Oneroot(int a, int b, int c, int Det) {
	
}

void Noroot(int a, int b, int c, int Det) {
	
}

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int Det = 0;
	scanf("%d %d %d", &a, &b, &c);
	Det = b * b - 4 * a * c;
	printf("%d", Det);
	if (Det > 0) {
		Tworoot(a, b, c, Det);
	}
	else if (Det = 0) {
		Oneroot(a, b, c, Det);
	}
	else {
		Noroot(a, b, c, Det);
	}
}
