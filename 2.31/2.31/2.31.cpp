#include <stdio.h>
int x;

int main() {

    printf("number\t square\t cube\n");

    for (x = 0; x <= 10; x++) {
        printf("%d\t %d\t %d\n", x, x * x, x * x * x);
    }

    return 0;
}
