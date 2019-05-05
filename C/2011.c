//2011

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return ( *(int*)a - *(int*)b );
}

int main() {
	int i = 0;
	int T = 0;
	int N = 0;
	int flag = 0;
	int array[2000001] = {0};
	
	scanf("%d", &T);
	
	while (T--) {
		scanf("%d", &N);
		
		for (i = 0; i < N; i++) scanf("%d", &array[i]);
		
		qsort(array, N, sizeof(int), cmp);
		
		if (array[0] != 0) {
			printf("0\n");
			continue;
		}
		
		for (i = 1; i < N; i++) {
			if (array[i] - array[i - 1] > 1) {
				printf("%d\n", array[i - 1] + 1);
				flag++;
				break;
			}
		}
		
		if (flag == 0) {
			flag = 0;
			printf("%d", array[i - 1] + 1);
		}
	}
	
	return 0;
}
