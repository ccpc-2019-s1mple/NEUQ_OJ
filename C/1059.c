//1059

#include <stdio.h>

int main() {
	int i = 0;
	int temp = 0;
	int insert = 0;
	int array[12] = {0};
	
	while (i++ < 9) scanf("%d", &array[i]);
	
	scanf("%d", &insert);
	
	for (i = 1; i < 10; i++) {
		if (insert > array[i] && insert < array[i + 1]) {
			printf("%d\n%d\n", array[i], insert);
		}
		else {
			printf("%d\n", array[i]);
		}
	}
	
	return 0;
}
