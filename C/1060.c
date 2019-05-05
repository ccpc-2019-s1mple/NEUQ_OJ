//1060

#include <stdio.h>

int main() {
	int i = 0;
	int array[10] = {0};
	
	for (i = 0; i < 10; i++) scanf("%d", &array[i]);
	for (i = 9; i >= 0; i--) printf("%d ", array[i]);
}
