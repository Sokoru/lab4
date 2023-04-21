#include <stdio.h>
#include <math.h>

int main()
{
    char input;
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
    float x, y, z;
    int i = 1;
    while (i)
    {
        printf("Задано формулу √(lg((1-2x)/(z+3)))\n");
        printf("Задайте число x: ");
        scanf("%f", &x);
        printf("Задайте число z: ");
        scanf("%f", &z);
        if (z <= -3 || x > 0 || (1 - 2 * x) < (z + 3))
        {
            printf("Невірно введені числа. Будь ласта, введіть інші (вірні) числа.\n");
        }
        else
        {
            i = 0;
        }
    }
    y = sqrt(log10((1 - 2 * x) / (z + 3)));
    printf("Обчислення: %.3lf\n", y);
    goto choice;
}
}
