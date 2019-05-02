//2018

#include <math.h>
#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int k = 0;
	int n = 0;
	int m = 1001;
	int min = 0;
	int pointer = 0;
	int map[500][500] = {0};
	int point[500][1] = {0};
	
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] == 1) {
				point[pointer][0] = i;
				point[pointer][1] = j;
				pointer++;
			}
		}
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			for (k = 0; k < pointer; k++) {
				if (min > abs(i - point[k][0]) + abs(j - point[k][1])) min = abs(i - point[k][0]) + abs(j - point[k][1]);
			}
			map[i][j] = min;
		}
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
}
