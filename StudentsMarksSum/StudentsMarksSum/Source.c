#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int marks_summation(int* marks, int number_of_students, char gender) {
    if (gender == 'g') {
        marks += 1;
    }

    int sum = 0;
    for (int i = 0; i < number_of_students; i += 2) {
        sum += *(marks + i);
    }

    return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int* marks = (int*)malloc(number_of_students * sizeof(int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}