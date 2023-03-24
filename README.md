#include <stdio.h>
#define MAXUCH 100
int main()
{
    char uch[MAXUCH][20];
    int itog[MAXUCH];
    int i, n; //счётчик и колличество участников
    int j, m; //счётчик и колличество стартов участников
    int kod; //номер участника
    int s, f; //время старта, время финиша
    
    printf("Кол-во участников: ");
    scanf("%d", &n);
    if ((n < 1) || (n > MAXUCH))
        n = MAXUCH;
    i = 1;
    while (i <= n)
    {
        printf("ФИО Участника\n");
        scanf("%s", uch[i]);
        ++i;
    }
    
    i = 1;
    while(i <= n)
    {
        itog[i] = 0;
        ++i;
    }
    
    printf("Кол-во стартов: ");
    scanf("%d", &m);
    j = 1;
    while (j <= m)
    {
        printf("Номер участника | Время старта | Время финиша\n");
        scanf("%d %d %d", &kod, &s, &f);
        itog[kod] = f - s;
        ++j;
    }
    
    printf("Номер участника | ФИО | Итоговое время\n");
    i = 1;
    while (i <= n)
    {
        printf("%d %s %d\n", i, uch[i], itog[i]);
        ++i;
    }

    return 0;
}
