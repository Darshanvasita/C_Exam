#include <stdio.h>

int main() {
    int num = 11;

    for (int i = 1; i <= 5; i++) {
     
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++; 
        }
        printf("\n");
    }

    return 0;
}
