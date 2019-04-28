//1047

#include <math.h>
#include <stdio.h>

int main() {
	int i = 0;
	int n = 0;
	int temp = 0;
	int result = 0;
	scanf("%d", &n);
	
	while (n--) {
		for (i = 0; i <= n; i++) {
			temp = temp + pow(10, i);
		}
		result = result + temp * 2;
		temp = 0;
	}
	printf("%d", result);
	
	return 0;
}
