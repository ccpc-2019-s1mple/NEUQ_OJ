//1042

#include <stdio.h>

int main() {
	int score = 0;
	scanf("%d", &score);
	
	if (score >= 90) printf("A");
	if (score > 80 && score <= 89) printf("B");
	if (score > 70 && score <= 79) printf("C");
	if (score > 60 && score <= 69) printf("D");
	if (score <= 60) printf("E");
}
