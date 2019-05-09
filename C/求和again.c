/*#include "stdio.h"
#include <math.h>
int main() {
	int a,n,i,sum=0;
	while(1) {
		scanf("%d",&a);
		if(a==-1) {
			return 0;
		} else {
			for(i=1; i<=10; i++) {
				double	b=pow(i,a);
				sum=sum+b;
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}*/
#include<stdio.h>
int main() {
	int n;
	while(scanf("%d",&n) && n!=-1)	{
		if(n==0)		printf("1\n");
		else		{
			printf("5");
			for(int i=1; i<=n-1; i++)
				printf("0");
			printf("5");
			for(int i=1; i<=n-1; i++)
				printf("0");
			printf("\n");
		}
	}
}



