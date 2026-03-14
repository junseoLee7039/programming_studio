// Add Numbers from 1 to n 

#include <stdio.h>

int main() {
    int number, totalsum = 0,i;

    scanf("%d", &number);

    if (number < 1) {
        printf("Incorrect input\n");
    } else {
        for (i = 1; i <= number; i++)
            totalsum += i;
        printf("%d\n", totalsum);
    }

    return 0;
}