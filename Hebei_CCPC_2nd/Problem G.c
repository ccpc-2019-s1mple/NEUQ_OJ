//G

#include <stdio.h>
#include <math.h>

int main() {
	int n = 0;
	int i = 0;
	long long int tears = 0;
	scanf("%d", &n);
	while (n--) {
		i++;
		tears = tears + pow(2, i);
	}
	printf("%lld", tears);
	
	return 0;
}
