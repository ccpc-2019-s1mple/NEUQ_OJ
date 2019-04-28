//1019 Incorrect

#include <math.h>
#include <stdio.h>

int main() {
	int n;
	int i;
	
	while (1) {
		scanf("%d", &n);
		if (n == -1) break;
		if (n == 0) {
			printf("1\n");
			continue;
		}
		printf("5");
		for (i = 1; i < n; i++) printf("0");
		printf("5");
		for (i = 1; i < n; i++) printf("0");
		printf("\n");
	}
	
	return 0;
}
