//求1-30的阶乘，并用科学计数法保留两位小数 
#include "stdio.h"
int main(){
	float sum=0,mul=1;
	int i; 
	for(i=1;i<=30;i++){
		mul=mul*i;
		sum=sum+mul;
	}
	printf("%.2e\n",sum);
	return 0;
}
