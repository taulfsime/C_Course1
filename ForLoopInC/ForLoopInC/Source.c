#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d\n%d", &a, &b);
	
	char texts[9][7] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	for (int i = a; i <= b; i++) {
		if (i <= 9) {
			printf("%s\n", texts[i - 1]);
		}
		else {
			printf(i % 2 == 0 ? "even\n" : "odd\n");
		}
	}


	return 0;
}