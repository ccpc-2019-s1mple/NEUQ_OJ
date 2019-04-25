//1897 Unfinished

#include <stdio.h>
#include <math.h>

int main() {
	int start[1];
	int flag[1];
	int mile = 0;
	//[0] X轴
	//[1] Y轴 
	
	while (1) {
		scanf("%d %d", &start[0], &start[1]);
		scanf("%d %d", &flag[0], &flag[1]);
		
		if (start[0] < flag[0]) {
			//出发点在旗帜左 
			if (start[1] < flag[0]) {
				//出发点在旗帜下 
				mile = (mile + (abs(flag[0]) - start[0]) + (abs(flag[1])- start[0])) * 2 + 8;
			}
			else {
				//出发点在旗帜上 
				mile = (mile + (abs(flag[0]) - start[0]) + (abs(flag[1])- start[0])) * 2 + 8;
			}
		}
		else {
			//出发点在旗帜右
			if (start[1] < flag[0]) {
				//出发点在旗帜下 
				mile = (mile + (abs(flag[0]) - start[0]) + (abs(flag[1])- start[0])) * 2 + 8;
			}
			else {
				//出发点在旗帜上 
				mile = (mile + (abs(flag[0]) - start[0]) + (abs(flag[1])- start[0])) * 2 + 8;
			}
		}
		printf("%d\n", mile);
		mile = 0;
	}
	
	return 0;
}
