//2015

#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int n = 0;
	int m = 0;
	int temp = 0;
	int flag = 0;
	int total = 0;
	int arrayA[256][256] = {0};
	int arrayB[256][256] = {0};
	scanf("%d %d", &n ,&m);
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arrayA[i][j]);
		}
	}
	
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &arrayB[i][j]);
		}
	}
	
	for (i = 0; i <= n - m; i++) {
		for (j = 0; j <= n - m; j++) {
			temp = arrayA[i][j] - arrayB[0][0];
			for (k = 0; k < m; k++) {
				for (l = 0; l < m; l++) {
					if (arrayA[i + k][j + l] - arrayB[k][l] == temp) flag++;
				}
			}
			if (flag == m * m) {
				total++;
			}
			flag = 0;
		}
	}
	printf("%d", total);
	return 0;
}
