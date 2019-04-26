//C

#include <stdio.h>

int main() {
	int n = 0;
	int change = 0;
	int balance = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &change);
		balance = balance + change;
	}
	printf("icebound is ");
	if (balance > 0) printf("happy.");
	if (balance == 0) printf("ok.");
	if (balance < 0) printf("sad.");
} 
