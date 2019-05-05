//1065

#include <stdio.h>
#include <string.h>

int main() {
	int i = 0;
	char str[1000] = {'\0'};
	scanf("%s", str);
	
	for (i = strlen(str) - 1; i >= 0; i--) printf("%c", str[i]);
}
