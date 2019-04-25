//1018

#include <stdio.h>
#include <string.h>

int main() {
	int n = 0;
	int i = 0;
	int j = 0;
	int carry = 0;
	int longer = 0;
	char bignumber1[1001] = {'0'}, bignumber2[1001] = {'0'};
	char bigresult[1001] = {'0'};
	
	scanf("%d", &n);
	while (n--) {
		scanf("%s", bignumber1);
		scanf("%s", bignumber2);
		strrev(bignumber1);
		strrev(bignumber2);
		longer = strlen(bignumber1) > strlen(bignumber2) ? strlen(bignumber1) : strlen(bignumber2);
		for (i = 0; i < longer; i++) {
			if (((int)bignumber1[i] - 48) + ((int)bignumber2[i] - 48) + carry > 9) {
				bigresult[i] = (((int)bignumber1[i] - 48) + ((int)bignumber2[i] - 48) + carry) / 10;
				carry = (((int)bignumber1[i] - 48) + ((int)bignumber2[i] - 48) + carry) % 10;
			}
			else {
				bigresult[i] = ((int)bignumber1[i] - 48) + ((int)bignumber2[i] - 48) + carry;
				carry = 0;
			}
		}
		j++;
		printf("Case %d:\n", j);
		for (i = 0; i < strlen(bigresult); i++) {
			printf("%d", (int)bigresult[i]);
		}
		printf("\n");
	}
	//printf("%s %d", bignumber1, strlen(bignumber1));
	
	return 0;
}
