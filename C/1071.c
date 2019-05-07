//1071

#include <stdio.h>
#define MOD(X,Y) X%Y;

int main() {
	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);
	int result = MOD(x, y);
	printf("%d", result);
}
