//1053

#include <stdio.h>

int main() {
	int n = 0;
	float height = 0.0;
	float distance = 0.0;
	
	scanf("%f %d", &height, &n);
	
	distance = distance + height;
	while (n--) {
		height = height / 2;
		distance = distance + height * 2;
	}
	
	printf("%.2f %.2f", height, distance - height * 2);
	
	return 0;
}
