#include <stdio.h>

int main() {
    int size;
    int stars, blank1, blank2;
    int i, j;
    
    if (scanf("%d", &size) != 1) return 0;
    
    for (i = 0; i < size; i++) {
        blank1 = i;                  
        blank2 = (size - 1 - i) * 2; 
        for (j = 0; j< blank1;j++) printf(" ");
        printf("*");
        for (j = 0; j < blank2; j++) printf(" ");
        printf("*\n");
    }
    
    for (i = 0; i <size + 1; i++) {
        stars = size * 2;
        for (j = 0;j<stars; j++) printf("*");
        printf("\n");
    }
    
    for (i = 1; i < size; i++) {
        blank1 = i;              
        stars = (size - i) * 2;  
        
        for (j=0;j<blank1;j++) printf(" ");
        for (j=0; j<stars;j++) printf("*");
        printf("\n");
    }
    
    stars = size * 2;
    for (j = 0; j < stars; j++) printf("*");
    printf("\n");

}