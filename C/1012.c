//1012

#include <stdio.h>

int main() {
	int n = 0;
	int i = 0;
	int j = 0;
	int query = 0;
	int Fib[31] = {0};
	
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d %d", &Fib[1], &Fib[2], &query);
		
		if (query < 3) {
			printf("%d\n", Fib[query]);
			continue;
		}
		
		for (i = 3; i <= 31; i++) {
			if (i % 2 == 0) {
				Fib[i] = Fib[i - 1] + Fib[i - 2] + Fib[i - 3];
			}
			else {
				Fib[i] = Fib[i - 1] + Fib[i - 2];
			}
		}
		
		printf("%d\n", Fib[query]);
	}
	
	return 0;
}
