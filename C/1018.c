//1018 Unfinished

#include <stdio.h>
#include <string.h>

char bignumber1[1001] = {'\0'}, bignumber2[1001] = {'\0'};

void Reverse() {
	int i = 0;
	char temp = '\0';
	for (i = 0; i < strlen(bignumber1); i++) {
		temp = bignumber1[i];
		bignumber1[i] = bignumber1[strlen(bignumber1) - i];
		bignumber1[strlen(bignumber1) - i] = temp;
	}
	for (i = 0; i < strlen(bignumber2); i++) {
		temp = bignumber2[i];
		bignumber2[i] = bignumber2[strlen(bignumber2) - i];
		bignumber2[strlen(bignumber2) - i] = temp;
	}
}

int main() {
	int n = 0;
	int i = 0;
	int j = 0;
	int carry = 0;
	int longer = 0;
	int shorten = 0;
	int bigflag = 0;
	char bigresult[1001] = {'\0'};
	
	scanf("%d", &n);
	while (n--) {
		scanf("%s", bignumber1);
		scanf("%s", bignumber2);
		Reverse();
		longer = strlen(bignumber1) > strlen(bignumber2) ? strlen(bignumber1) : strlen(bignumber2);
		shorten = strlen(bignumber1) < strlen(bignumber2) ? strlen(bignumber1) : strlen(bignumber2);
		bigflag = strlen(bignumber1) > strlen(bignumber2) ? 1 : 2;
		for (i = 0; i < shorten; i++) {
			if (((int)bignumber1[i] - 48) + ((int)bignumber2[i] - 48) + carry > 9) {
				bigresult[i] = (((int)bignumber1[i] - 48) + ((int)bignumber2[i] - 48) + carry) / 10;
				carry = (((int)bignumber1[i] - 48) + ((int)bignumber2[i] - 48) + carry) % 10;
			}
			else {
				bigresult[i] = ((int)bignumber1[i] - 48) + ((int)bignumber2[i] - 48) + carry;
				carry = 0;
			}
		}
		
		for (i; i < longer; i++) {
			if (bigflag == 1) {
				bigresult[i] = bignumber1[i];
			}
			else {
				bigresult[i] = bignumber2[i];
			}
		}
		
		j++;
		printf("Case %d:\n", j);
		Reverse();
		printf("%s + %s = ",bignumber1, bignumber2);
		for (i = strlen(bigresult); i >= 0; i--) {
			printf("%d", bigresult[i]);
		}
		printf("\n");
	}
	
	return 0;
}
