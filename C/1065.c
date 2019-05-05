//1065

#include <stdio.h>
#include <string.h>

void Reverse(char *str) {
	int i = 0;
	for (i = strlen(str) - 1; i >= 0; i--) printf("%c", str[i]);
}

int main() {
	int i = 0;
	char str[1000] = {'\0'};
	scanf("%s", str);
	Reverse(str);
	
	return 0;
}
