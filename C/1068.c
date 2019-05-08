//1068

#include <stdio.h>

void PRINT(char *array, int i) {
	int j = 0;
	for (j = 0; j < i; j++) printf("%c ", array[j]);
}

int main() {
	int i = 0;
	char array[5] = {'\0'};
	for (i = 0; i < 4; i++) scanf("%c", &array[i]);
	PRINT(array, 4);
	return 0;
}
