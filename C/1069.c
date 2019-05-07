//1069
//字母 数字 空格 符号 

#include <stdio.h>
#include <string.h>

	int counter_alphabet = 0;
	int counter_number = 0;
	int counter_space = 0;
	int counter_symple = 0;

void Find(char *str) {
	int i = 0;
	for (i = 0; i < strlen(str); i++) {
		if ((str[i] >= 65 && str[i]<= 90) || (str[i] >= 97 && str[i] <= 122)) {
			counter_alphabet++;
		}
		else if (str[i] >= 48 && str[i] <= 57) {
			counter_number++;
		}
		else if (str[i] == 32) {
			counter_space++;
		}
		else {
			counter_symple++;
		}
	}
}

int main() {
	char str[1000] = {'\0'};
	gets(str);
	Find(str);
	printf("%d %d %d %d ", counter_alphabet, counter_number, counter_space, counter_symple);
	return 0;
}
