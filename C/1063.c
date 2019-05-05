//1063

#include <math.h>
#include <stdio.h>

int main() {
	int i = 0;
	int number = 0;
	
	scanf("%d", &number);
	
	for (i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			printf("not prime");
			return 0;
		}
	}
	
	printf("prime");
	return 0;
}
