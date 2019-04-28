//1037

#include <stdio.h>

int main() {
	int i = 0;
	char toEncode[5] = {"\0"};
	scanf("%s", toEncode);
	
	for (i = 0; i < 5; i++) {
		printf("%c", toEncode[i] + 4);
	}
	
	return 0;
}
