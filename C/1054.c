//1054

#include <stdio.h>

int n = 0;

int peach(int day) {
	if (day == 1) return 1;
	return ((peach(day - 1) + 1) * 2);
}

int main() {
	scanf("%d", &n);
	printf("%d", peach(n));
	
	return 0;
}
