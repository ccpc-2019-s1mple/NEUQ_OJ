//1064

#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int array[3][3] = {0};
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &array[i][j]);
		}
	}
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", array[j][i]);
		}
		printf("\n");
	}
}
