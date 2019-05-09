//1077

#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int temp = 0;
	int array[3] = {0};
	
	for (i = 0; i < 3; i++) scanf("%d", &array[i]);
	
	for (i = 0; i < 3 - 1; i++) {
		for (j = 0; j < 3 - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	
	for (i = 0; i < 3; i++) printf("%d ", array[i]);
	
	return 0;
}
