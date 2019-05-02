//1056

#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int N = 0;
	int array[1000] = {0};
	
	scanf("%d", &N);
	
	for (i = 2; i <= N; i++) array[i] = i;
	
	for (i = 2; i <= N; i++) {
		for (j = i + 1; j <= N; j++) {
			if (j % i == 0) array[j] = 0;
		}
	}
	
	for (i = 2; i <= N; i++) {
		if (array[i] != 0) printf("%d\n", array[i]);
	}
	
	return 0;
}
