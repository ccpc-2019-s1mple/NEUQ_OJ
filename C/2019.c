//2019

#include <stdio.h>
#include <string.h>

void sort(int *array, int length){
	int i,j,temp;
	for(i=0;i<length;i++){
		for(j=0;j<i;j++){
			if(array[i]<array[j]){
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;	
			}
		}
	}
}


int main() {
	int i = 0;
	int length = 0;
	int operation = 0;
	int array[200000] = {0};
	int arraycopy[20000] = {0};
	
	int arg1 = 0;
	int arg2 = 0;
	int arg3 = 0;
	char command[6] = {'\0'};
	
	scanf("%d", &length);
	for (i = 0; i < length; i++) {
		scanf("%d", &array[i]);
	}
	scanf("%d", &operation);
	
	while (operation--) {
		scanf("%s", command);
		switch (strcmp(command, "set")) {
			case 0:
				scanf("%d %d %d", &arg1, &arg2, &arg3);
				for (i = arg1; i <= arg2; i++) {
					array[i] = arg3;
				}
				break;
			default:
				scanf("%d %d", &arg1, &arg2);
				for (i = 0; i < arg2 - arg1; i++) arraycopy[i] = array[arg1 + i];
				sort(arraycopy, arg2 - arg1);
				if (arraycopy[(arg2 - arg1) / 2] == arraycopy[arg2]) {
					printf("%d\n", arraycopy[arg2]);
				}
				else {
					printf("-1\n");
				}
				break;
		}
	}
}
