#define _CRT_SECURE_NO_WARNINGS

//https://www.hackerrank.com/challenges/sorting-array-of-strings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    for (int i = 0;; i++) {
        char ca = *(a + i);
        char cb = *(b + i);

        if (ca == '\0') {
            return 1;
        }
        else if (cb == '\0') {
            return 0;
        }
        else if (cb != ca) {
            return (ca - cb > 0 ? 1 : 0);
        }
    }

    return 0;
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return (lexicographic_sort(a, b) == 0 ? 1 : 0);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {

}

int sort_by_length(const char* a, const char* b) {

}

void string_sort(char** arr, const int len, int (*cmp_func)(const char* a, const char* b)) {
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (cmp_func(arr + i, arr + j) == 1) {
                char* temp = *(arr + j);
                *(arr + j) = *(arr + i);
                *(arr + i) = temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    char** arr;
    arr = (char**)malloc(n * sizeof(char*));

    for (int i = 0; i < n; i++) {
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
    printf("\n");

    string_sort(arr, n, lexicographic_sort);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
}