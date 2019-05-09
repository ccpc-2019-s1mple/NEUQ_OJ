
//1044
#include <stdio.h>
int main() {
	int i,n,sum=0;
	scanf("%d",&n);
	if(n<=100000) {
		i=1;
	} else if(n<=200000) {
		i=2;
	} else if(n<=400000) {
		i=3;
	} else if(n<=600000) {
		i=4;
	} else if(n<=1000000) {
		i=5;
	} else i=6;
	
	switch(i) {
		case 6:
			sum=sum+(n-1000000)*0.01;
		case 5:
			sum=sum+(n-600000)*0.015;
		case 4:
			sum=sum+(n-400000)*0.03;
		case 3:
			sum=sum+(n-200000)*0.05;
		case 2:
			sum=sum+(n-100000)*0.075;
		case 1:
			sum=sum+n*0.1;
	printf("%d",sum);
	}
	return 0;
}
