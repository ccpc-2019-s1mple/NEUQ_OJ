//2019

#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int N = 0;
	int Q = 0;
	int temp = 0;
	int times = 0;
	int arg1 = 0, arg2 = 0, arg3 = 0;
	int array[200001] = {0};
	int arraycopy[200001][1] = {0};
	char command[6] = {'\0'};
	scanf("%d", &N);
	for (i = 1; i <= N; i++) scanf("%d", &array[i]);

	scanf("%d", &Q);
	while (Q--) {
		scanf("%s", command);

		if (strcmp(command, "set") == 0) {
			scanf("%d %d %d", &arg1, &arg2, &arg3);

			for (i = arg1; i <= arg2; i++) array[i] = arg3;

			for (i = 1; i <= N; i++) printf("%d ", array[i]);
		}
		else {
			scanf("%d %d", &arg1, &arg2);
			for (i = arg1; i <= arg2; i++) {
				temp = array[i];
				for (j = arg1; j <= arg2; j++) {
					if (array[j] == temp) times++;
				}
				if (times > (arg2 - arg1 + 1) / 2) {
					printf("%d\n", temp);
					break;
				}
				else {
					printf("-1\n");
					break;
				}
				times = 0;
			}
		}
	}

	return 0;
}
