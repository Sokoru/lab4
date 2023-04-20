#include <stdio.h>
#include <math.h>
int main()
{
    int input;
choice:
    printf("Запустити код? (y/n): ");
    scanf(" %s", &input);
    if (input == 'y')
    {
        goto code;
    }
    else if (input == 'n')
    {
        printf("Код зупинено.");
        return 0;
    }
    else
    {
        printf("Невірний вибір, введіть ще раз.\n");
        goto choice;
    }

code:
{
    float a = -2, b = 12, dx = 0.5;
    float x, y;
    printf("\n****************\n");
    printf("  X\t  Y\n");
    printf("****************\n");
    for (x = a; x <= b; x += dx) {
    if (x == 2) {
    printf("Невизначений результат для x = %.2f\n", x);
    continue;
    }
    y = (pow(x, 4) - 12 * x) / (x - 2);
    printf("%.2f\t%.2f\n", x, y);
    }
    goto choice;
}
}

