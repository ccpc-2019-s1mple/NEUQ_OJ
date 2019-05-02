//Problem H Temple

#include <stdio.h>

int main() {
	int i = 0;
	int j = 1;
	int temp = 0;
	int counter = 0;
	unsigned int l = 0;
	unsigned int r = 0;
	unsigned int P = 0;
	
	scanf("%u %u", &l, &r);
	
	while (1) {
		counter = i++;
		while (counter--) {
			j = j * 2;
		}
		temp = temp + j;
		j = 1;
		if (temp < r && temp + j > r) {
			printf("%d", temp);
			break;
		}
	}
	
	return 0;
}
