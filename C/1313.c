//1313

#include <stdio.h>

int main() {
	int A = 0;
	int B = 0;
	char Operator = {'\0'};
	char Formula[20] = {'\0'};
	scanf("%s", Formula);
	sscanf(Formula, "%d%c%d", &A, &Operator, &B);
	switch (Operator) {
		case '+':
			printf("%d", A + B);
			break;
		case '-':
			printf("%d", A - B);
			break;
		case '*':
			printf("%d", A * B);
			break;
	}
	
	return 0;
}
