//1009

#include <stdio.h>
#include <string.h>

int main() {
	int i = 0;
	int charCounter = 0;
	int spaceCounter = 0;
	int numberCounter = 0;
	int sympleCounter = 0;
	char inputstr[1000] = {0};
	gets(inputstr);
	for (i = 0; i < strlen(inputstr); i++) {
		if ((inputstr[i] >= 65 && inputstr[i] <= 90) || (inputstr[i] >= 97 && inputstr[i] <= 122)) {
			charCounter++;
		}
		else if (inputstr[i] == 32) {
			spaceCounter++;
		}
		else if (inputstr[i] >= 48 && inputstr[i] <= 57) {
			numberCounter++;
		}
		else sympleCounter++;
	}
	printf("%d\n%d\n%d\n%d\n", charCounter, spaceCounter, numberCounter, sympleCounter);
	
	return 0;
}
