//1051

#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int k = 0;
	int N = 0;
	int temp = 0;
	int pointer = 0;
	int array[100] = {0};
	
	scanf("%d", &N);
	
	for (i = 4; i <= N; i++) {
		j = 1;
		
		for (j; j <= i / 2; j++) {
			if (i % j == 0) {
				temp = temp + j;
				array[pointer] = j;
				pointer++;
			}
		}
		
		if (i == temp) printf("%d its factors are ", i);
		
		for (k = 0; k < pointer; k++) {
			printf("%d ", array[k]);
		}
		
		printf("\n");
	}
	
	return 0;
}
