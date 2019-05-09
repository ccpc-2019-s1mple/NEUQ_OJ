//1033
#include "stdio.h"
int main() {
	int i,j,a[4][4],x,y;
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			scanf("%d",&a[i][j]);
		}
	}
x=a[0][0]+a[1][1]+a[2][2];
y=a[0][2]+a[1][1]+a[2][0];
printf("%d %d",x,y);
	return 0;
}
