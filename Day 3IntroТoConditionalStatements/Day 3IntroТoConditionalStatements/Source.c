#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	if (n % 2 == 0) {
		if (n >= 2 && n <= 5) {
			printf("Not Weird");
		}
		else if (n >= 6 && n <= 20) {
			printf("Weird");
		}
		else {
			printf("Not Weird");
		}
	}
	else {
		printf("Weird");
	}

	return 0;
}