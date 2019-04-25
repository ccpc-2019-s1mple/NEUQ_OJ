//1135 Unfinished

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i = 0;
	int flag = 0;
	int IPsub[3] = {0};
	char IPdot[3] = {'\0'};
	char IP[] = "000.000.000.000";
	
	while (1) {
		gets(IP);
		if (strcmp(IP, "End of file") == 0) {
			break;
		}
		else {
			for (i = 1; i <= strlen(IP); i++) {
				if (IP[i] == '.') {
					if (i >= 2) {
						if (IP[i - 2] == 0 && IP[i - 1] != 0) flag--;
					}
				}
			}
			sscanf(IP, "%d%c%d%c%d%c%d%c", &IPsub[0], &IPdot[0], &IPsub[1], &IPdot[1], &IPsub[2], &IPdot[2], &IPsub[3], &IPdot[3]);
			if (IPdot[0] == '.') {
				if (IPdot[1] == '.') {
					if (IPdot[2] == '.') {
						flag++;
					}
				}
			}
			if (IPsub[0] <= 255 && IPsub[0] >= 0) {
				if (IPsub[1] <= 255 && IPsub[1] >= 0) {
					if (IPsub[2] <= 255 && IPsub[2] >= 0) {
						if (IPsub[3] <= 255 && IPsub[3] >= 0) {
							flag++;
						}
					}
				}
			}
		}
		if (flag == 2) {
			printf("Y\n");
			flag = 0;
		}
		else {
			printf("N\n");
			flag = 0;
		}
	}

	return 0;
}
