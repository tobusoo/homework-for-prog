#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tickets.h"

void menu(FILE *fp, int flight, const char *file)
{
    printf("Бронирование билетов на рейс %d с %d местами\n", flight, SIZE);
    if ((fp = fopen(file, "r")) == NULL)
    {
        fprintf(stderr, "Ошибка при чтении файла \"%s\"\n", file);
        fprintf(stderr, "Поместите файл \"%s\" на один уровень выше?\n", file);
        exit(EXIT_FAILURE);
    } 
    
    ticket airpline[SIZE] = {};
    add_info_from_file(fp, airpline);

    puts("");
    printf("\tВыбор для рейса %d\n", flight);
    puts("1) Показать количество свободных мест");
    puts("2) Показать список свободных мест");
    puts("3) Показать список забронированных мест в алфавитном порядке");
    puts("4) Забронировать место для пассажира");
    puts("5) Снять бронь с места");
    puts("6) Вернуться в главное меню");
        

    int ch = 1;
    while (scanf("%d", &ch) == 1 && ch != 6)
    {     
        switch (ch)
        {
            case 1:
                puts("");
                show_free(airpline, SIZE);
                break;
            case 2:
                puts("");
                show_list_free(airpline, SIZE);
                break;
            case 3:
                puts("");
                show_list_busy(airpline, SIZE);
                break;
            case 4:
                puts("");
                take_ticket(airpline, fp);
                break;
            case 5:
                puts("");
                off_ticket(airpline, fp);
                break;
            case 6:
                puts("");
                break;
            default:
                puts("Введите значение в диапазоне a-f!");
        }
        puts("");
        printf("\tВыбор для рейса %d\n", flight);
        puts("1) Показать количество свободных мест");
        puts("2) Показать список свободных мест");
        puts("3) Показать список забронированных мест");
        puts("4) Забронировать место для пассажира");
        puts("5) Снять бронь с места");
        puts("6) Вернуться в главное меню");
    }
    add_to_file(airpline, SIZE, fp, file); 
    fclose(fp);
}

void print_ticket(ticket *peoples)
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d %d %d %s %s\n", 
                peoples[i].flight,
                peoples[i].number,
                peoples[i].flag,
                peoples[i].name,
                peoples[i].lname
        );
    }
}

void show_free(ticket *peoples, size_t n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (peoples[i].flag == 0)
        {
            count++;
        }
    }
    printf("Количество свободных мест: %d\n", count);
}

void show_list_free(ticket *peoples, size_t n)
{
    puts("Список свободных мест:");
    for (int i = 0; i < n; i++)
    {
        if (peoples[i].flag == 0)
        {
            printf("Место - %d свободно\n", peoples[i].number);
        }
    }
}

void show_list_busy(ticket *peoples, size_t n)
{
    puts("Список забронированных мест:\n");
    printf("Рейс: Место: Имя: \tФамилия:\n");
    for (int i = 0; i < n; i++)
    {
        if (peoples[i].flag == 1)
        {
            printf("%-5d %-6d %-1s \t%s\n",
                    peoples[i].flight,
                    peoples[i].number,
                    peoples[i].name,
                    peoples[i].lname);
        }
    }
}

void add_to_file(ticket *peoples, size_t n, FILE *file, char const *string)
{
    fclose(file);
    file = fopen(string, "w");
    for (int i = 0; i < n; i++)
    {   
        fprintf(file, "%d %d %d %s %s\n",
                peoples[i].flight,
                peoples[i].number,
                peoples[i].flag,
                peoples[i].name,
                peoples[i].lname
        );
    }
}

void off_ticket(ticket *peoples, FILE *file)
{
    int number;
    printf("Введите номер места для снятия брони: ");
    scanf("%d", &number);

    peoples[number-1].flag = 0;
    peoples[number-1].name = "NONE";
    peoples[number-1].lname = "NONE";  
    printf("\nБронь с %d места снята!\n", number);
}

void take_ticket(ticket *peoples, FILE *file)
{
    int number;
    printf("Введите номера места для бронирования: ");
    scanf("%d", &number);
    if (peoples[number-1].flag == 1)
    {
        puts("Место уже забронировано!");
    } else {
        printf("Введите имя пассажира: ");
        char *name = (char *) malloc(25);
        scanf("%s", name);
        peoples[number-1].name = name;
        printf("Введите фамилию пассажира: ");
        char *lname = (char *) malloc(25);
        scanf("%s", lname);
        peoples[number-1].lname = lname;
        puts("\nБронирование прошло успешно!");
        peoples[number-1].flag = 1;
    }
}

void add_info_from_file(FILE *file, ticket *peoples)
{
    for (int i = 0; i < SIZE; i++)
    {
        int flight, number, flag;
        char *name = (char *) malloc(25);
        char *lname = (char *) malloc(25);
        
        fscanf(file, "%d", &flight);
        peoples[i].flight = flight;

        fscanf(file, "%d ", &number);
        peoples[i].number = number;
        
        fscanf(file, "%d", &flag);
        peoples[i].flag = flag;

        fscanf(file, "%s", name);
        peoples[i].name = name;

        fscanf(file, "%s", lname);
        peoples[i].lname = lname;
    }
}
