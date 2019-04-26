//1031

#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int min = 0;
	int temp = 0;
	int array[10] = {0};
	
	for (i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
	}
	
    for(i = 0; i < 10 - 1; i++) {
        min = i;
        for(j = i + 1; j < 10; j++){
        	if(array[min] > array[j]) min = j;
		}
        if(min != i) {
            temp = array[min];
            array[min] = array[i];
            array[i] = temp;
        }
    }
    
    for (i = 0; i < 10; i++) {
    	printf("%d\n", array[i]);
	}
    return 0;
}
