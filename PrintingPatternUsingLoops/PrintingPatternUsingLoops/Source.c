#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = -n + 1 ; i < n ; i++) {
		int y = i < 0 ? -i : i;

		for (int j = -n + 1; j < n; j++) {
			int x = j < 0 ? -j : j;
			printf("%d ", (x > y ? x : y) + 1);
		}

		printf("\n");
	}

	return 0;
}