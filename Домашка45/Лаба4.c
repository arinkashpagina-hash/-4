

#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "RUS");

    int A, B;   

    printf("¬ведите уровень голода ¬ани (A): ");
    scanf("%d", &A);

    printf("¬ведите уровень голода ѕети (B): ");
    scanf("%d", &B);

   
    if ((A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0))
    {
        printf("”словие выполнено: резать пиццу на 4 части.\n");
    }
    else
    {
        printf("”словие не выполнено: резать пиццу на 6 частей.\n");
    }

    return 0;
}