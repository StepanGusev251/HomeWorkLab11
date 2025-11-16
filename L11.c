#include <stdio.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    int a[100];
    int i;
    int neg1 = -1, neg2 = -1;
    int sum = 0, count = 0;

    printf("n = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Поиск двух отрицательных элементов в одном цикле
    for (i = 0; i < n; i++) {
        if (a[i] < 0) {
            if (neg1 == -1) {
                neg1 = i;      // Первый отрицательный
            }
            else {
                neg2 = i;      // Второй отрицательный
                break;         // Выходим из цикла
            }
        }
    }

    // Вычисление среднего

    for (i = neg1 + 1; i < neg2; i++) {
        sum += a[i];
        count++;
    }

    printf("Среднее: %.2f\n", (float)sum / count);

    return 0;
}