//2016

#include <stdio.h>

int main() {
	long long l = 0,r = 0;
	scanf("%lld %lld", &l, &r);
	
	while((l | (l + 1)) <= r){
        l |= (l + 1);
    }
    printf("%d", l);
	
	return 0;
}
