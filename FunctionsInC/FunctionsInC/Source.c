#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int max = a;
    max = (max < b) ? b : max;
    max = (max < c) ? c : max;
    max = (max < d) ? d : max;

    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}