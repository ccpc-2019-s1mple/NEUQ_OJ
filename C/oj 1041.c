//1041
#include <stdio.h>
int main(){
	int x,i,n;
	scanf("%d",&x);
	if(x<1){
		printf("%d",x);
	}else{
		if(x<10&&x>=1){
			printf("%d",2*x-1);
		}else printf("%d",3*x-11);
	}
	return 0;
}
