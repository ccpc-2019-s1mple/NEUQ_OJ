//1034

#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int temp = 0;
	int array1[7] = {0};
	int array2[9] = {0};
	
	for (i = 0; i < 6; i++) scanf("%d", &array1[i]);
	for (i = 0; i < 8; i++) scanf("%d", &array2[i]);
	
	for (i = 1; i <= 6 - 1; i++) {
		for (j = 1; j <= 6 - i; j++) {
			if (array1[j] < array1[j + 1]) {
				temp = array1[j];
				array1[j] = array1[j + 1];
				array1[j + 1] = temp;
			}
		}
	}
	
	for (i = 1; i <= 8 - 1; i++) {
		for (j = 1; j <= 8 - i; j++) {
			if (array2[j] < array2[j + 1]) {
				temp = array2[j];
				array2[j] = array2[j + 1];
				array2[j + 1] = temp;
			}
		}
	}
	
	for (i = 5; i >= 0; i--) {
		for (j = 7; j >= 0; j--) {
			if (array1[i] == array2[j]) {
				printf("%d\n", array1[i]);
			}
		}
	}
	
	return 0;
}
