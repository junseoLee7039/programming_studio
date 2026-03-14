// Converting Days into Hours, Minutes, and Seconds

#include <stdio.h>

int main() {
    int days,hours, minutes, seconds;

    scanf("%d", &days);
    hours   = days * 24;
    minutes = days * 24 * 60;
    seconds = days * 24 * 60 * 60;

    printf("%d days = %d hours\n",   days, hours);
    printf("%d days = %d minutes\n", days, minutes);
    printf("%d days = %d seconds\n", days, seconds);

    return 0;
}