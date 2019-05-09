//从小到大排序（1000以内个数试用）
#include <stdio.h>
void insertionSort(int A[],int n) {
	for(int i=1; i<n; i++) {
		int get=A[i];
		int j=i-1;
		while(j>=0&&A[j]>get) {
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=get;
	}
}
int main() {
	int A[]= {88,99,66,55,22};
	//int n=5; 
	//int n=sizeof(A)/sizeof(int);
	insertionSort(A,n);
	printf("插入排序结果：\n");
	for(int i=0; i<n; i++) {
		printf("%d\t",A[i]);
	}
	return 0;
}
