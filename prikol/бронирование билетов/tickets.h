#include <stdio.h>
#define F_PATH_102 "../102.txt"
#define F_PATH_311 "../311.txt"
#define F_PATH_444 "../444.txt"
#define F_PATH_519 "../519.txt"
#define SIZE 12

typedef struct Ticket {
    int flight;
    int number;
    int flag;
    char *name;
    char *lname;
} ticket;

void menu(FILE *fp, int flight, const char *file);
void print_ticket(ticket *peoples);
void show_free(ticket *peoples, size_t n);
void show_list_free(ticket *peoples, size_t n);
void show_list_busy(ticket *peoples, size_t n);
void add_to_file(ticket *peoples, size_t n, FILE *file, char const *string);
void off_ticket(ticket *peoples, FILE *file);
void take_ticket(ticket *peoples, FILE *file);
void add_info_from_file(FILE *file, ticket *peoples);