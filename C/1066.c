//1066

#include <stdio.h>
#include <string.h>

void link(char *str1, char *str2) {
	char Linked[2000] = {'\0'};
	strcat(Linked, str1);
	strcat(Linked, str2);
	printf("%s", Linked);
}

int main() {
	char str1[1000] = {'\0'};
	char str2[1000] = {'\0'};
	
	scanf("%s", str1);
	scanf("%s", str2);
	
	link(str1, str2);
	
	return 0;
}
