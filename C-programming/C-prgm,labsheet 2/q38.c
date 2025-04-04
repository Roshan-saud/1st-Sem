#include <stdio.h>

int main() {
    printf("ASCII Table\n");
    printf("Decimal\tCharacter\n");

    for (int i = 0; i <= 127; ++i) {
        printf("%d=%c,",i,i);
    }

    return 0;
}