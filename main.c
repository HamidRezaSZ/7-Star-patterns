#include <stdio.h>

int num;

void draw(int n) {
    if (n != 0) {
        int z = 2 * n - 2;
        int counter = 0;
        for (int i = 1; i <= 2 * n; ++i) {
            printf("*");
        }
        printf("\n");
        for (int j = 1; j <= 2 * n - 1; ++j) {
            while (z != 0) {
                printf(" ");
                --z;
            }
            ++counter;
            printf("*\n");
            z = 2 * n - 2;
            z = z - counter;;
        }
        draw(n - 1);
    }
}

int main() {
    printf("Enter a number:\n");
    scanf("%d", &num);
    draw(num);
    printf("Press 'Enter' to exit\n");
    scanf("%2c");
    return 0;
}
