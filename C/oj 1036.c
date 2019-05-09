//1036
#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c)  printf("%d",a);printf("%d",c);
	}else{
		if(b>c)  printf("%d",b);printf("%d",c);
	}
	
	return 0;
}
