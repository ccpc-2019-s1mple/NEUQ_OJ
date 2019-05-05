//1063

#include <math.h>
#include <stdio.h>

void Isprime(int number) {
	int i = 0;
	for (i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			printf("not prime");
			return 0;
		}
	}
	printf("prime");
}

int main() {
	int i = 0;
	int number = 0;
	
	scanf("%d", &number);
	Isprime(number);
	return 0;
}
