#include <stdio.h>
#include <math.h>
int main(){
	int a,b,i;
	float c,sum=0;
	scanf("%d %d %d",&a,&b,&c);
	for(i=1;i<=a;i++){
		sum=sum+a;
	}
	for(i=1;i<=b;i++){
		sum=sum+pow(i,2);
	}
	for(i=1;i<=c;i++){
		sum=sum+1/i;
	}
	printf("%.2f",sum);
	
	return 0;
} 
