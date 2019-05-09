//1078

#include <stdio.h>
#include <string.h>

int main() {
	char str[3][1000] = {'\0'};
	
	scanf("%s", str[1]);
	scanf("%s", str[2]);
	scanf("%s", str[3]);
	
	if (strcmp(str[1], str[2]) < 0) {							//str1 < str2
		if (strcmp(str[2], str[3]) < 0) {						//str2 < str3
			printf("%s\n%s\n%s\n", str[1], str[2], str[3]);
		}
		if (strcmp(str[2], str[3]) > 0) {						//str2 > str3
			if (strcmp(str[1], str[3]) > 0) {					//str1 > str3
				printf("%s\n%s\n%s\n", str[3], str[1], str[2]);
			}
			if (strcmp(str[1], str[3]) < 0) {					//str1 < str3
				printf("%s\n%s\n%s\n", str[1], str[3], str[2]);
			}
		}
	}
	if (strcmp(str[1], str[2]) > 0) {							//str1 > str2
		if (strcmp(str[2], str[3]) < 0) {						//str2 < str3
			if (strcmp(str[1], str[3]) > 0) {					//str1 > str3
				printf("%s\n%s\n%s\n", str[2], str[3], str[1]);
			}
			if (strcmp(str[1],str[3]) < 0) {					//str1 < str3
				printf("%s\n%s\n%s\n", str[2], str[1], str[3]);
			}
		}
		if (strcmp(str[2], str[3]) > 0) {						//str2 > str3
			printf("%s\n%s\n%s\n", str[3], str[2], str[1]);
		}
	}
	
	return 0;
}
