//1044

#include <stdio.h>

int grade(int money){
	if (money <= 100000) return 0;
	if (money > 100000 && money <= 200000) return 1;
	if (money > 200000 && money <= 400000) return 2;
	if (money > 400000 && money <= 600000) return 3;
	if (money > 600000 && money <= 1000000) return 4;
	if (money > 1000000) return 5;
}

int main() {
	int money = 0;
	int prize = 0;
	scanf("%d", &money);
	switch (grade(money)) {
		case 5:
			prize = prize + (money - 1000000) * 0.010;
		case 4:
			prize = prize + (money - 600000) * 0.015;
		case 3:
			prize = prize + (money - 400000) * 0.030;
		case 2:
			prize = prize + (money - 200000) * 0.050;
		case 1:
			prize = prize + (money - 100000) * 0.075;
		case 0:
			prize = prize + money * 0.100;
	}
	printf("%d", prize);
	
	return 0;
}
