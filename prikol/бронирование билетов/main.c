#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "tickets.h"

int main()
{   
    int flight = 102;

    FILE * fp;

    puts("");
    puts("Выберите рейс для бронирования!");
    puts("Для выхода из программа введите 0");
    puts("Доступные рейсы: 102 311 444 519");
    puts("");

    while ((scanf("%d", &flight) == 1) && (flight != 0))
    {   
        fflush(stdin);
        switch(flight)
            {
                case 102:
                    menu(fp, flight, F_PATH_102);
                    break;
                case 311:
                    menu(fp, flight, F_PATH_311);
                    break;
                case 444:
                    menu(fp, flight, F_PATH_444);
                    break;
                case 519:
                    menu(fp, flight, F_PATH_519);
                    break;
                default:
                    puts("Такого рейса не существует!");
            }
        puts("");
        puts("Выберите рейс для бронирования!");
        puts("Для выхода из программа введите 0");
        puts("Доступные рейсы: 102 311 444 519");
        puts("");
    }
    
    puts("Программа завершена!");

    return 0;
}
 