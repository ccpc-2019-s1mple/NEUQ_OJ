#include "stdio.h"
int main() {
	int a,b,n,i,sum[100],j;
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		scanf("%d%d",&a,&b);
		sum[i]=a+b;	
		printf("%d\n",sum[i]);  
  }
	return 0;
}
