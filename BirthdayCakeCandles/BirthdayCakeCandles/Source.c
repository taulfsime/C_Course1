#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int birthdayCakeCandles(int candles_count, int* candles) {
	int max = -1;
	int count = 0;

	for (int i = 0; i < candles_count; i++) {
		if (candles[i] > max) {
			max = candles[i];
			count = 1;
		}
		else if (candles[i] == max) {
			count += 1;
		}
	}

	return count;
}

int main() {
	int n;
	int heights[100000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &heights[i]);
	}

	printf("%d", birthdayCakeCandles(n, heights));

	return 0;
}