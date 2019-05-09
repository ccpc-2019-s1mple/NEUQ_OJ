//1076

#include<stdio.h>
#include<string.h>

int main() {
	int i,length;
	char a[100];
	gets(a);
	length = strlen(a);
	for(i = 0; i < length; i++) {
		if (a[i] >= 97 && a[i] <= 122) {
			a[i] = (a[i] - 96) % 26 + 97;
		} else if(a[i] >= 65 && a[i] <= 90) {
			a[i] = (a[i] - 64) % 26 + 65;
		} else {
			a[i] = a[i];
		}
	}
	puts(a);
}

