#include <stdio.h>
#include <Windows.h>

int isLeapYear(int year) {
    if (year % 400 == 0) return 1;
    if (year % 100 == 0) return 0;
    if (year % 4 == 0) return 1;
    return 0;
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;

    printf("Введите 2 целых числа:\n");
    printf("1. Начало анализируемого интервала\n");
    printf("2. Конец анализируемого интервала\n");

    scanf_s("%d %d", &a, &b);



    int num = a;
    int count = 0;

    do {
        if (isLeapYear(num)) {
            printf("%d\t", num);
            count++;

            if (count % 10 == 0) {
                printf("\n");
            }
        }
        num++;
    } while (num <= b);
