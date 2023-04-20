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
        goto method;
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

method:
{
    int input;
    printf("a - з параметром; b - з передумовую; c - з післяумовою. \n");
    printf("Яким методом будемо вирішувати завдання? Щоб повернутися - напишіть  r. (a/b/c/r): ");
    scanf(" %s", &input);
    if (input == 'a')
    {
        goto code_1;
    }
    else if (input == 'b')
    {
        goto code_2;
    }
    else if (input == 'c')
    {
        goto code_3;
    }
    else if (input == 'r')
    {
        goto choice;
    }
    else
    {
        printf("Невірний вибір, введіть ще раз.\n");
        goto method;
    }
}

code_1:
{
    int x, sum = 0, i;
    printf("Задайте ціле число x: ");
    scanf("%d", &x);
    for (i = 2; i <= 50; i += 2)
    {
        if (i > x)
        {
            sum += i;
        }
    }
    printf("Сума парних чисел, більших за %d: %d\n", x, sum);
    goto choice;
}

code_2:
{
    int x, sum = 0;
    printf("Задайте ціле число x: ");
    scanf("%d", &x);
    int i = 2;
    while (i <= 50)
    {
        if (i > x)
        {
            sum += i;
        }
        i += 2;
    }
    printf("Сума парних чисел, більших за %d: %d\n", x, sum);
    goto choice;
}

code_3:
{
    int x, sum = 0, i = 2;
    printf("Задайте ціле число x: ");
    scanf("%d", &x);
    do
    {
        if (i > x)
        {
            sum += i;
        }
        i += 2;
    } while (i <= 50);
    printf("Сума парних чисел, більших за %d: %d\n", x, sum);
    goto choice;
}
}
