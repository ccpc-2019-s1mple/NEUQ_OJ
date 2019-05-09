//1045
#include <stdio.h>
int main(){
	int c,m,n,b,t,a;
	scanf("%d %d",&m,&n);
	if(m<n){
		t=m;
		m=n;
		n=t;
	}
	a=m*n;
	b=m%n;
	while(b!=0){
		m=n;
		n=b;
		b=m%n;
	}
	printf("%d %d",n,a/n);
	
	return 0;
}
