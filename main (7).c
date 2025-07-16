#include <stdio.h>

int min_steps(int x, int y) {
    int d = y - x;
    if (d == 0) return 0;

    int k = 1;
    while (1) {
        if (k * k >= d)
            return 2 * k - 1;
        else if (k * (k + 1) >= d)
            return 2 * k;
        k++;
    }
}

int main() {
    int x, y;
    printf("Введіть два цілі числа (x y): ");
    scanf("%d %d", &x, &y);

    if (x > y || x < 0 || y >= 2147483647) {
        printf("Невірні вхідні дані\n");
        return 1;
    }

    int result = min_steps(x, y);
    printf("Мінімальна кількість кроків: %d\n", result);

    return 0;
}
