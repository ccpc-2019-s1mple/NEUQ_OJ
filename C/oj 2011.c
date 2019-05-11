#include<stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return ( *(int*)a - *(int*)b );
}

int main() {
	int a[200001];
	int n = 0;
	int i = 0;
	int t = 0;
	int g = 0;
	int flag = 0;
	scanf("%d", &t);

	while(t--) {
		scanf("%d", &n);
		for(i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}

		qsort(a, n, sizeof(int), cmp);//ÅÅÐò

		if(a[0]!=0) {
			printf("0\n");
			continue;
		}
		for(g = 1; g < n; g++) {
			if(a[g] - a[g - 1] > 1) {
				printf("%d\n",a[g - 1] + 1);
				flag = 1;
				break;
			}
		}
		continue;
	}
	if(flag==0) {
		printf("%d\n",a[g - 1] + 1);
	}
	return 0;
}
