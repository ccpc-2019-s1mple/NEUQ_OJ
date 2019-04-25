//1887

#include <stdio.h>

int main() {
	int eggs = 150;
	int mob1egg = 0;
	int mob2egg = 0;
	float mob1price = 0.0;
	float mob2price = 0.0;
	
	for (mob1egg = 1; mob1egg < eggs; mob1egg++) {
		mob2egg = eggs - mob1egg;
		mob1price = 32.0 / mob2egg;
		mob2price = 24.5 / mob1egg;
		if ((mob1egg * mob1price) == (mob2egg * mob2price)) {
			break;
		}
	}
	
	if (mob1egg > mob2egg) {
		printf("%d,%d", mob1egg, mob2egg);
	}
	else {
		printf("%d,%d", mob2egg, mob1egg);
	}
	
	return 0;
}
