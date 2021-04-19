#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	float price;
	int tipPer;
	int taxPer;

	scanf("%f\n%d\n%d", &price, &tipPer, &taxPer);

	float tip = price * ((float)tipPer / 100.0f);
	float tax = price * ((float)taxPer / 100.0f);

	printf("%d", (int)round(price + tip + tax));

	return 0;
}