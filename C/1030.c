//1030

#include <stdio.h>

int main() {
	int R = 0;
	float area = 0.0;
	
	for (R = 1; R <= 10; R++) {
		area = R * R * 3.1415926535;
		if (area >= 40.0 && area <= 90.0) printf("r=%d area=%2.2f\n", R, area);
	}
	
	return 0;
}
