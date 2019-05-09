#include "stdio.h"
double a=1,sum;
double x,y;
int main() {
	while(a) {
	    sum=0;
		sum=scanf("%lf%lf",&x,&y);
		if(x!=0||y!=0) {
			sum=x+y;
			printf("%.0lf\n",sum);
			a=1;
		} else {
			a=0;
		}
	}
	return 0;
}
