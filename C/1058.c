//1058

#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int array[2][2] = {0};
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &array[i][j]);
		}
	}
	
	printf("%d %d",	array[0][0] + array[1][1] + array[2][2],
					array[0][2] + array[1][1] + array[2][0]);
	
	return 0;
}
