//1032

#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int array[20] = {0};
	for (i = 0; i < 20; i++) {
		scanf("%d", &array[i]);
	}
	
	for (i = 0; i < 20; i++) {
		for (j = 0; j < 20; j++) {
			if (i == j) continue;
			if (array[i] % array[j] == 0) {
				printf("%d\n", array[i]);
				break;
			}
		}
	}
	
	return 0;
}
