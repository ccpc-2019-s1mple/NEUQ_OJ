//2012

int main() {
	int i = 0;
	int T = 0;
	int sale = 0;
	int plan = 0;
	int price[16] = {0};
	
	scanf("%d", &T);
	
	
	price[1] = 1;
	price[2] = 2;
	for (i = 1; i < 16; i++) {
		price[i] = price[i - 1] + price[i - 2];
	}
	
	while (T--) {
		scanf("%d", &sale);
		
		
		
		plan = plan % 1000000009;
	}
}
