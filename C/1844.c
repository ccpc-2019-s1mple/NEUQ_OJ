//1844

#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int k = 0;
	int T = 1;
	int Flag = 0;
	int width = 0;
	int height = 0;
	int counter = 0;
	char captcha[10][10] = {'\0'};
	
	//scanf("%d", &T);
	while (T--) {
		for (i = 0; i < 10; i++) {
			scanf("%s", captcha[i]);
		}
		
		for (i = 0; i < 10; i++) {
			for (j = 0; j < 10; j++) {
				if (captcha[i][j] == '#') {
					
					k = j;
					while (1) {
						//横向判断长度 
						k++;
						if (captcha[i][k] != '#' ) break;
					}
					height = k - j;
					
					k = i;
					while (1) {
						//纵向判断长度 
						k++;
						if (captcha[k][j] != '#') goto Finished;
					}
					height = k - i;
					
				}
			}
		}
		
		Finished:
		
		if (width <= 2 && height <= 2) {
			printf("1\n");
			break;
		}
		
		for (j = i + 1; j < height; j++) {
			if (captcha[i][j] == '#') {
				Flag++;
				if (Flag == 2) {
					printf("8\n");
					break;
				}
			}
		}
		
		printf("%d\n", Flag);
		
		if (Flag == 0) {
			printf("0\n");
		}
	}
	
	return 0;
}
