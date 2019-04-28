//1086

#include <stdio.h>

int main() {
	int i = 0;
	int M = 0;
	int N = 0;
	int len = 0;
	int temp1 = 0;
	int temp2 = 0;
	int List[100] = {0};
	
	scanf("%d %d", &M, &N);
	
	while (M--) {
		scanf("%d %d", &temp1, &temp2);
		List[temp1] = temp2;
		len = len > temp1 ? len : temp1;
	}
	
	while (N--) {
		scanf("%d %d", &temp1, &temp2);
		List[temp1] = temp2;
		len = len > temp1 ? len : temp1;
	}
	
	for (i = 0; i <= len; i++) {
		if (List[i] != 0) {
			printf("%d %d\n", i, List[i]);
		}
	}
	
	return 0;
}
