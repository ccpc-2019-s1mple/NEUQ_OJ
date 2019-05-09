#include <stdio.h>
#include <math.h>
int main() {
	int a[6]={0},b,count=0,i,x;
	scanf("%d",&b);
    x=b;
	while(x/10) {
		if(x>0)  count++;
		x=x/10;
	}
	count++;
	printf("%d\n",count);
	switch(count) {
		case 5:
			a[1]=b/10000;
			printf("%d ",a[1]);	
		case 4:
			a[2]=b/1000%10;
			printf("%d ",a[2]);
		case 3:
			a[3]=b/100%10;
			printf("%d ",a[3]);
		case 2:
			a[4]=b/10%10;
			printf("%d ",a[4]);
		case 1:
			a[5]=b%10;
			printf("%d",a[5]);
	}
	/*for(i=1;i<=count;i++){
		printf("%d ",a[i]);
	}*/
	printf("\n");
	for(i=0;i<count;i++){
		printf("%d",a[5-i]);
	}

	return 0;
}
