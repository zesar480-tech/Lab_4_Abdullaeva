#include <stdio.h>
#include <locale.h>

int dz4(int A, int B);

int main()
{
    setlocale(LC_ALL, "Ru");
    
    printf("\nДомашнее задание\n");
    int A, B;
    printf("введите номер кнопки, которую нажал игрок A: ");
    scanf("%d", &A);
    printf("введите номер кнопки, которую нажал игрок B: ");
    scanf("%d", &B);
    int usl = dz4(A, B);
    printf("победили ли в раунде? (1 - да, 0 - нет): %d\n", usl);
    return 0;
}

int dz4(int A, int B)
{
    int uslovie = (A % 2 == 0 && B % 2 == 1) || (A % 2 == 1 && B % 2 == 0);
    printf("игрок A нажал %s кнопку.\n", (A % 2 == 0) ? "ЧЁТНУЮ" : "НЕЧЁТНУЮ");
    printf("игрок B нажал %s кнопку.\n", (B % 2 == 0) ? "ЧЁТНУЮ" : "НЕЧЁТНУЮ");

    return uslovie;
}