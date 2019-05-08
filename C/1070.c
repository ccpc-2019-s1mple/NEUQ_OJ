//1070

#include <stdio.h>
#define swap(X,Y,N) N=X; X=Y; Y=N;

int main() {
	int x = 0;
	int y = 0;
	int n = 0;
	scanf("%d %d", &x, &y);
	swap(x, y, n);
	printf("%d %d", x, y);
}
