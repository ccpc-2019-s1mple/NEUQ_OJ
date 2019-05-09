#include "stdio.h"
int main() {
	int counter=0,n,i;
	float sum=0.0;
	int a;
	for(i=0; i<20; i++) {
		scanf("%d",&a);
		if(a<0) {
			counter++;
		} else {
			sum=sum+a;
		}
	}
	printf("%d\n",counter);
	printf("%0.2f",sum/(20-counter));
	return 0;
}
