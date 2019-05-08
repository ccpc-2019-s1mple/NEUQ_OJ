//1072

#include <math.h>
#include <stdio.h>
#define	S(a,b,c)		((a+b+c)/2)
#define	AREA(S,a,b,c)	(sqrt(S*(S-a)*(S-b)*(S-c)))

int main() {
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	scanf("%f %f %f", &a, &b, &c);
	float S = S(a, b, c);
	float result = AREA(S, a, b, c);
	printf("%.3f", result);
}
