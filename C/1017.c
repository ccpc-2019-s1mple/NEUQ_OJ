//1017

#include <stdio.h>

int main() {
	int n;
	int i;
	int Lighting[10000];
	Lighting[1] = 2;
	scanf("%d", &n);
	for (i = 2; i < 10000; i++) {
		Lighting[i] = Lighting[i - 1] + 10 * (i - 1) - (i - 2);
	}
	while (n--) {
		scanf("%d", &i);
		printf("%d\n", Lighting[i]);
	}
	
	return 0;
}
