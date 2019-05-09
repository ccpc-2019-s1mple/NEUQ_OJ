#include"stdio.h"
int main() {
	int n,i,ai,a[100],t,g;
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}for(i=0;i<n;i++){
	
	if(a[i]<a[i+1]) {
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}}
	g=a[i]*a[i+1];
	for(i=a[i]; i<a[i+1]; i++) {
		if(i%a[i]==0&&i%a[i+1]==0) {
			return i;
		}
		printf("%d",a[i]);
	}

	return 0;
}
