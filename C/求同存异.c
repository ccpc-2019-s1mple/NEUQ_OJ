#include "stdio.h"
int sort(int *a) {
	int j,i,temp;
	for(i=0; i<6-1; i++) {
		for(j=0; j<6-i-1; j++) {
			if(a[j]>a[j+1]) {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=a[temp];
				return a[j];
			}

		}
	}
}

int main() {
	int a[10],b[10],i,j;
	for(i=0; i<6; i++) { //输入第一个6位
		scanf("%d",&a[i]);
	}
	for(i=0; i<8; i++) {  //输入一个8位的
		scanf("%d",&b[i]);
	}
		
	sort(a);
	for(i=0; i<6; i++) {  
		for(j=0; j<8; j++) {
			if(a[i]==b[j]) {
			 	printf("%d\n",a[i]); 
			}
		}
	}
	return 0;
}
