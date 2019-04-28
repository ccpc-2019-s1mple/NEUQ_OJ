//1028

#include <stdio.h>

int main() {
	int n = 0;
	int i = 0;
	
	scanf("%d", &n);
	for (i = 2; i <= n;) {
		if (n % i == 0) {
			if (n != i){
				printf("%d ", i);
				n = n / i;
			}
			else {
				printf("%d\n", i);
				n = n / i;
			}
		}
		else {
			i++;
		}
	}
	
	return 0;
}
