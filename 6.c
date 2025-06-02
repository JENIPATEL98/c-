#include <stdio.h>

int main() {
    int i,j;
    for( i = 1; i <= 5; i++) {
        char c = 'A' + i - 1; 
        for(j = 1; j <= i; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}