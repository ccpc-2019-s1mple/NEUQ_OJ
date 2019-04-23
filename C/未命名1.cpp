//1012 Incorrect

#include <stdio.h>

int main() {
	int i;
	int j;
	int k;
	int n = 0;
	int Gen1 = 1, Gen2 = 1;
	int GenN = 1;
	int Fib[30] = {0};
	int result[10];
	scanf("%d", &i);
	for (i; i > 0; i--) {
		scanf("%d %d %d", &Gen1, &Gen2, &GenN);
		Fib[0] = Gen1;
		Fib[1] = Gen2;
		for (j = 2; j <= GenN; j++) {
			for (k = 0; k < j; k++) {
				Fib[j] = Fib[j] + Fib[k];
			}
		}
		result[10 - i] = Fib[j];
		n++;
	} 
	
	for (i = 0; i < n; i++) {
		printf("%d\n", result[i]);
	}
} 
