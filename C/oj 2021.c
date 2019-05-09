/*#include <stdio.h>
#include <math.h>
int main() {
	long P;
	int i,n;
	scanf("%d",&n);
	P=pow(2,n);
	i=P%20180520;
	printf("%ld\n",i);
	return 0;
}*/
//1233
#include <stdio.h>
int main() {
	int q[101],head,tail;
	int i,n;
	scanf("%d",&n);
	
	for(i=0;i<=n;i++){
		scanf("%d",& q[i+1]);
	}     
	head=1;
	tail=n; 
	while(head<tail) { 
		
		printf("%d ",q[head]);
		head++;
		
		q[tail]=q[head];
		tail++;         
		head++;
	}
	getchar();
	getchar();
	return 0;
}
