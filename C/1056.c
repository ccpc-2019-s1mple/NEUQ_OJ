//1056

#include <stdio.h>

int main() {
	int n = 0;
	int i = 0;
	int j = 0;
	int pointer = 0;
	
	scanf("%d", &n);
	int List[10000] = {0};
	for (i = 2; i <= n; i++) List[i] = i;
	
	for (i = 2; i <= n; i++) {
		for (j = i; j <= n; j++) {
			if (j % i == 0) {
				List[j] = 0;
			}
		}
	}
	
	for (i = 2; i < n; i++) {
		if (List[i] != 0) printf("%d\n", i);
	}
	
	return 0;
}
