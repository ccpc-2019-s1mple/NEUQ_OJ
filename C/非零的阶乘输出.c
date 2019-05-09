#include "stdio.h"
#include "string.h"
int main() {
	int n,j,s;
	long long a=1;
	long long i;
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		a=a*i;
	}
	printf("%d",a);
	for(i=10; i<10000000000;) {
		j=a%i;
		if(j!=0) {
           for(i=1;i<100;)
		   s=j%10;
			printf("%d",j);
	 
			break;
		}
		i=i*10;

	}

	return 0;
}
