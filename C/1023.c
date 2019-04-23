//1023 Unfinished

#include <stdio.h>
#include <string.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	char tempchr = '\0';
	char calc[100] = {'\0'};
	int number[100] = {0};
	int i;
	
	for (i = 0; i < n; i++) {
		scanf("%c", &tempchr);
		switch (tempchr) {
			case '+' :
				calc[i] = '+';
				break;
			case '-' :
				calc[i] = '-';
				break;
			case '*' :
				calc[i] = '*';
				break;
			case '/' :
				calc[i] = '/';
				break;
			default :
				number[i] = (int)tempchr;
		}
	}
	printf("%d %d %c", number[0], number[1], calc[0]);
	
	return 0;
}
