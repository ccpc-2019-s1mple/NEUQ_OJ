#include <stdio.h>
#include <stdlib.h>
/*int cmp(const void *a, const void *b) {
	return ( *(int*)a - *(int*)b );
}*/
int main() {
	int i,n,j,a[200000],temp,x,flag=0;
	scanf("%d",&x);
	while(x--) {
		scanf("%d",&n);
		for(i=0; i<n; i++) {
			scanf("%d",&a[i]);
		}
		for(i=0; i<n-1; i++) {
			for(j=0; j<n-i-1; j++) {
				if(a[j]>a[j+1]) {
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		//	qsort(a, n, sizeof(int), cmp);
		if(a[0]!=0) {
			printf("%d\n",0);
			continue;
		}
		for(i=0; i<n-1; i++) {
			if(a[i+1]-a[i]>1) {
				printf("%d",a[i]+1);
				flag++;
				break;
			}

		}
		if(flag==0) {
			printf("%d",a[n-1]+1);
		}
		flag = 0;
		printf("\n");
	}
	return 0;
}
