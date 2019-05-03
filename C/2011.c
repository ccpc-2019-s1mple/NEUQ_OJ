//2011
//2018 CCPC 2nd Problem A

#include <stdio.h>

void Sort(int *arr, int n) {
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int i = 0;
	int j = 0;
	int T = 0;
	int N = 0;
	int temp = 0;
	int flag = 0;
	int array[20000] = {0};
	scanf("%d", &T);

	while (T--) {
		scanf("%d", &N);

		for (i = 0; i < N; i++) {
			scanf("%d", &array[i]);
		}
		
		Sort(array, N);
		
		
		
		flag = 0;
	}
	
	return 1;
}