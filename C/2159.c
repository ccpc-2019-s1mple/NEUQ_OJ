//2159

#include <stdio.h>

int main() {
	int i = 0;
	int T = 0;
	int rest = 0;
	int counter = 0;
	int targetX = 0;
	int targetY = 0;
	scanf("%d", &T);
	
	while (T--) {
		scanf("%d %d %d", &targetX, &targetY, &rest);
		
		for (i = 0; i < targetX + targetY; i++) {
			if (i % rest == 0) counter++;
		}
		printf("%d\n", counter - 1);
		counter = 0;
	}
}
