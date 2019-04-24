//A

#include <stdio.h>

int main() {
	int n = 0;
	int i = 0;
	int j = 0;
	int temp = 0;
	int array[10000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			if(array[j] < array[i]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	
	while (n--) {
		for (i = 0; i <= array[0] + 1; i++) {
			for (j = 0; j < n; j++) {
				if (i <= array[j]) {
					continue;
				}
				else {
					printf("%d", i);
					return 0;
				}
			}
		}
	}
}
