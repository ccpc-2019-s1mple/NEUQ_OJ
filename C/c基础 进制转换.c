//����һ��10�����������һ��8�������� 
#include "stdio.h"
#include <math.h>
int main(){
	int n,a,sum=0,i=0;
	scanf("%d",&n);  //10����һ���� 
	 while(n){
	 	a=n%8;  //����   
	 	n=n/8;  //���� 
	 	sum+=a*pow(10,i);  //pow(10,i)ָ�������10��i���� 
	 	i++;
	 }
     	printf("%d",sum);  //���8������ 
	return 0;
}
