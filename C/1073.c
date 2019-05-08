//1073

#include <stdio.h>
#define LEAP_YEAR(y)	((y%4==0&&y%100!=0)||(y%400==0))?'L':'N'

int main() {
	int y = 0;
	scanf("%d", &y);
	printf("%c", LEAP_YEAR(y));
	return 0;
}
