#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int rAnd = i & j;
            int rOr = i | j;
            int rXor = i ^ j;

            if (rAnd < k) {
                maxAnd = (maxAnd < rAnd ? rAnd : maxAnd);
            }

            if (rOr < k) {
                maxOr = (maxOr < rOr ? rOr : maxOr);
            }

            if (rXor < k) {
                maxXor = (maxXor < rXor ? rXor : maxXor);
            }
        }
    }

    printf("%d\n%d\n%d", maxAnd, maxOr, maxXor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
