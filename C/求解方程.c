#include <stdio.h>
int main() {
	int x=0,y=0,i,n;
	for(x=100; x<1333; x++) {
		for(y=100; y<1333; y++) {
			if(x+y==1333) {
				if(x/100==y%10 && y/100==x%10 && x%100/10==y%100/10)
					printf("%d+%d=1333\n",x,y);
			}
		}
	}
	return 0;
}
/*oj 1032 
#include <stdio.h>
int main(){
	int i,j,a[100];
	for(i=1; i<=20; i++) {
		scanf("%d",&a[i]);
	}
	for(i=1; i<=20; i++) {
		for(j=1; j<=20; j++) {
			if(i==j) continue;
			if(a[i]%a[j]==0) {
				printf("%d\n",a[i]);
				break;
			}
		}
	}
	return 0;
}*/
