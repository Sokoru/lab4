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
    int n, x, i, j, sum = 0;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);
    printf("Введіть ціле число x: ");
    scanf("%d", &x);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            sum += i * j + x;
        }
    }
    printf("Результат: %d \n", sum);
    goto choice;
}
}
