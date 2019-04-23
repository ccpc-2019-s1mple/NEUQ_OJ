//1013

#include <stdio.h>

int main() {
	int n;
	int i;
	scanf("%d", &n);
	int number;
	int Counter = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &number);
		if (number % 2 == 0) Counter = Counter + number;
	}
	printf("%d", Counter);
	return 0;
} 
