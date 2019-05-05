//1067

#include <stdio.h>
#include <string.h>

void vowel(char *str) {
	int i = 0;
	for (i = 0; i < strlen(str); i++) {
		switch (str[i]) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf("%c", str[i]);
		}
	}
}

int main() {
	char str[1000] = {'\0'};
	scanf("%s", str);
	vowel(str);
	
	return 0;
}
