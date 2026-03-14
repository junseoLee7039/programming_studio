// Determination of Water Temperature Range

#include <stdio.h>

int main() {
    float input_degree;

    scanf("%f", &input_degree);

    if (input_degree < 0)
        printf("Invalid Input\n");
    else if (input_degree < 25)
        printf("Cold water\n");
    else if (input_degree < 40)
        printf("Warm water\n");
    else if (input_degree < 80)
        printf("Hot water\n");
    else
        printf("Boiling water\n");

    return 0;
}