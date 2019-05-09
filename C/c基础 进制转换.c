//输入一个10进制数，输出一个8进制数； 
#include "stdio.h"
#include <math.h>
int main(){
	int n,a,sum=0,i=0;
	scanf("%d",&n);  //10进制一个数 
	 while(n){
	 	a=n%8;  //求余   
	 	n=n/8;  //求商 
	 	sum+=a*pow(10,i);  //pow(10,i)指的是这个10的i次幂 
	 	i++;
	 }
     	printf("%d",sum);  //输出8进制数 
	return 0;
}
