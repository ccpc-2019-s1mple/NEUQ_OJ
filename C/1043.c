//1043

#include <stdio.h>
#include <string.h>

int main() {
	int i = 0;
	char number[5] = {'\0'};
	scanf("%s", number);
	
	printf("%d\n", strlen(number));
	for (i = 0; i < strlen(number) - 1; i++) {
		printf("%d ", number[i] - 48);
	}
	printf("%d\n", number[i] - 48);
	for (i = strlen(number) - 1; i >= 0; i--) {
		printf("%d", number[i] - 48);
	}
	
	return 0;
}
