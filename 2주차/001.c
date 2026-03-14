// Calculation of Age by Year of Birth

#include <stdio.h>

int main() {
    int birth_year;
    int age;

    scanf("%d", &birth_year);
    age = 2026 - birth_year;
    printf("%d\n", age);

    return 0;
}