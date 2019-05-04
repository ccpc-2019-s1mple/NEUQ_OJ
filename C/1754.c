//1754

#include <stdio.h>

int main() {
	int i = 0;
	int max = 0;
	int temp = 0;
	int temp1 = 0;
	int temp2 = 0;
	int money = 0;
	int Stones = 0;
	int Backpack = 0;
	int OreandPrice[100000][1] = {0};

	while (1) {
		scanf("%d %d", &Backpack, &Stones);
		temp = Stones;
		
		for (i = 0; i < Stones; i++) {
			scanf("%d %d", &temp1, &temp2);
			OreandPrice[i][0] = temp1;//as size
			OreandPrice[i][1] = temp2;//as price
		}

		while (Backpack) {
			max = 0;
			for (i = 0; i < 100000; i++) {
				if (OreandPrice[i][1] == 0) continue;
				if (max < OreandPrice[i][1]) max = OreandPrice[i][1];
			}

			for (i = 0; i < 100000; i++) {
				if (OreandPrice[i][1] == max && OreandPrice[i][0] != 0) {
					if (Backpack - i <= 0) {
						printf("%d %d", money + OreandPrice[i][1], OreandPrice[i][1]);
						return 0;
					} else {
						Backpack = Backpack - i;
					}

					money = money + OreandPrice[i][1];
					OreandPrice[i][1] = 0;
				}
			}
		}
	}
}
