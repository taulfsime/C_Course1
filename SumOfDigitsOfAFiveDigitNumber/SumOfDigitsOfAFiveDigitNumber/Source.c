#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int n;
    int sum = 0;
    while (scanf("%d", &n) && (n < 10000 || n > 99999));

    while(n > 0){
        sum += (int)(n % 10);
        n = (int)(n / 10);
    }

    printf("%d", sum);

    return 0;
}