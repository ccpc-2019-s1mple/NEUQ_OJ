1035
#include <stdio.h>
int xy() {
	for(int i=0; i<30; i++) {
		printf("*");
	}
}
int main() {
	int i,j,a;
	xy();
	printf("\n");
	for(i=0; i<9; i++) {
		printf(" ");
	}
	printf("Very    Good!");
	printf("\n");
	xy();

	return 0;
}




