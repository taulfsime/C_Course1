#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void solve(double meal_cost, int tip_percent, int tax_percent) {
	float tip = meal_cost * ((float)tip_percent / 100.0f);
	float tax = meal_cost * ((float)tax_percent / 100.0f);

	printf("%d", (int)round(meal_cost + tip + tax));
}

int main() {
	float price;
	int tipPer;
	int taxPer;

	scanf("%f\n%d\n%d", &price, &tipPer, &taxPer);
	solve(price, tipPer, taxPer);

	return 0;
}