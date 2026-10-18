#include <stdio.h>

int main() {
    
    char letter_1;
    char letter_2;
    char letter_3;

    int i;

    printf("Please input a 3 letter name: ");
    scanf("%c%c%c", &letter_1, &letter_2, &letter_3);
    
    printf("%c%c%c \n", letter_1, letter_2, letter_3);
    
    for (i = 0 ; i < 8; i++) {
        printf("%c", letter_1);
        
        for (i = i ; i < 8;) {
            printf("%c", letter_2);

            for (i = i ; i < 8;) {
                printf("%c", letter_3);

                 for (i = i ; i < 8;) {
                    printf("\n");
                }

            }

        }

    }

    return 0;
}
