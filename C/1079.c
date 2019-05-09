//1079

#include <stdio.h>

void Function_output(int *array, int max, int min) {
	int i = 0;
	printf("%d ", min);
	for (i = 0; i < 10; i++) {
		if (array[i] == max || array[i] == min) continue;
		printf("%d ", array[i]);
	}
	printf("%d ", max);
	return;
}

void Function_resort(int *array) {
	int i = 0;
	int max = array[1];
	int min = array[1];
	for (i = 0; i < 10; i++) {
		if (max < array[i]) max = array[i];
		if (min > array[i]) min = array[i];
	}
	Function_output(array, max, min);
	return;
}

void Function_input() {
	int i = 0;
	int array[11] = {0};
	for (i = 0; i < 10; i++) scanf("%d", &array[i]);
	Function_resort(array);
	return;
}

int main() {
	Function_input();
	
	return 0;
}
