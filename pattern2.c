#include <stdio.h>

int main() {
    int n;  
    scanf("%d", &n);
    int spaces = n - 1;  

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        
        for (int j = 0; j < (2 * i + 1); j++) {
            if (i % 2 == 0) {
                printf("^");
            } else {
                printf("*");
            }
        }
        printf("\n");

        spaces--;
    }

    return 0;
}
