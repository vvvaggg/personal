/* Дано целое число N и набор из N целых чисел. Найти номера
первого минимального и последнего максимального элемента из данного
набора и вывести их в указанном порядке.
Вагина Полина Алексеевна 22ИС-21*/

#include <stdio.h>

int main()
{
    int a,n,z,min,max,mine,maxe;
    scanf("%d", &n);
    for (a=1;a<=n;++a){
        printf("%d>",a);
        scanf("%d", &z);
        if ((a==1)||(z<min)){
            min=z;
            mine=a;
        }
        if ((a==1)||(z>=max)){
            max=z;
            maxe=a;
        }
    }
    printf("%d\n", mine);
    printf("%d\n", maxe);
    return 0;
}