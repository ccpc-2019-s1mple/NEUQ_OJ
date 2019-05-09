#include "stdio.h"
int fun(int a,int b,int n){
	if(n==1) return a;
	else if(n==2) return b;
	if(n%2==1) return fun(a,b,n-1)+fun(a,b,n-2);
	else return fun(a,b,n-1)+fun(a,b,n-2)+fun(a,b,n-3);
}
int main(){
	int a,b,n;
	int t;
	scanf("%d",&t);
	while(t--)
	while(scanf("%d%d%d",&a,&b,&n)!=EOF)
	{
		printf("%d\n",fun(a,b,n));
	}
	return 0;
} 
