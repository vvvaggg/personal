/*While17. Дано целое число N (> 0). Используя операции деления нацело и
взятия остатка от деления, вывести все его цифры, начиная с самой правой
(разряда единиц).
Вагина Полина 22ИС-21*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int num = 0;
    do {
        num = 10 * num + n % 10;
        n = n / 10;
    }while (n > 0);
    printf("%d\n", num);
    return 0;
}