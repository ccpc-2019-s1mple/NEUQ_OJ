#include <stdio.h>
int main() {
	int a,n;
	int sum=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d",&a);
		sum=sum+a;
	}

	if(sum>0) {
		printf("icebound is happy.");
	} else if(sum==0) {
		printf("icebound is ok.");
	} else {
		printf("icebound is sad.");
	}
	return 0;
}
