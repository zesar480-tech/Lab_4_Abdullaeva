#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>


int task1()
{
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("\n===== НОМЕР 1 =====\n");

    printf("Начальные значения:\n");
    printf("char:   %c\n", c);
    printf("int:    %d\n", i);
    printf("float:  %.2f\n", f);
    printf("double: %.12lf\n", d);

    printf("\nВведите символ: ");
    scanf(" %c", &c);

    printf("Введите целое число: ");
    scanf("%d", &i);

    printf("Введите вещественное число float: ");
    scanf("%f", &f);

    printf("Введите вещественное число double: ");
    scanf("%lf", &d);

    printf("\nВведённые значения:\n");
    printf("char:   %c\n", c);
    printf("int:    %d\n", i);
    printf("float:  %.2f\n", f);
    printf("double: %.12lf\n", d);


    float number;
    int integerPart;
    float fractionalPart;

    printf("\n--- Задача 1а ---\n");
    printf("Введите вещественное число: ");
    scanf("%f", &number);

    integerPart = (int)number;
    fractionalPart = number - integerPart;

    printf("Целая часть: %d\n", integerPart);
    printf("Дробная часть: %.2f\n", fractionalPart);


    printf("\n--- Задача 1б ---\n");
    printf("Введите символ: ");
    scanf(" %c", &c);

    printf("Символ: %c\n", c);
    printf("Десятичный код: %d\n", (unsigned char)c);
    printf("Шестнадцатеричный код: %X\n", (unsigned char)c);


    printf("\n--- Задача 1в ---\n");
    printf("Введите целое число i: ");
    scanf("%d", &i);

    if (i != 0)
        printf("1 / i = %.6f\n", 1.0 / i);
    else
        printf("Деление на ноль невозможно.\n");
}


int task2()
{
    int a = 11;
    int b = 3;
    int x;
    float y;
    double z;

    printf("\n===== НОМЕР 2 =====\n");

    x = a / b;
    y = a / b;
    z = a / b;

    printf("a = %d, b = %d\n\n", a, b);

    printf("x = a / b, где x int:    %d\n", x);
    printf("y = a / b, где y float:  %.2f\n", y);
    printf("z = a / b, где z double: %.2lf\n", z);

    printf("\nОбъяснение:\n");
    printf("a и b имеют тип int, поэтому сначала выполняется целочисленное деление.\n");
    printf("11 / 3 = 3, дробная часть отбрасывается.\n");

    printf("\n--- Явное преобразование ---\n");

    printf("(float)a / b  = %.2f\n", (float)a / b);
    printf("(double)a / b = %.6lf\n", (double)a / b);

    printf("\n--- Эксперимент со скобками ---\n");

    printf("(float)(a / b) = %.2f\n", (float)(a / b));
    printf("(float)a / b   = %.2f\n", (float)a / b);

    printf("\n(float)(a / b) сначала выполняет 11 / 3 как int: 3,\n");
    printf("и только потом преобразует результат в float.\n");

    printf("(float)a / b сначала преобразует a в float,\n");
    printf("поэтому получается 3.666667.\n");
}


int task3()
{
    int n;
    int last;
    int first;
    int middle;
    int sum;
    int reverse;

    printf("\n===== НОМЕР 3 =====\n");

    printf("Введите целое трёхзначное число: ");
    scanf("%d", &n);

    last = n % 10;
    first = n / 100;
    middle = (n / 10) % 10;

    sum = first + middle + last;

    reverse = last * 100 + middle * 10 + first;

    printf(
        "Последняя цифра: %d, первая: %d, сумма цифр: %d, число наоборот: %d\n",
        last, first, sum, reverse
    );
}



int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");

    task1();
    task2();
    task3();

    system("pause");

    return 0;
}