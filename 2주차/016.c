// Determining Apartment Type Based on Size

#include <stdio.h>

int main() {
    float m2_area;
    float pyung_area;

    scanf("%f", &m2_area);
    pyung_area = m2_area / 3.305;

    printf("%.1f\n", pyung_area);

    if (pyung_area < 15)
        printf("Small\n");
    else if (pyung_area < 30)
        printf("Small to Medium\n");
    else if (pyung_area < 50)
        printf("Medium\n");
    else
        printf("Large\n");

    return 0;
}

