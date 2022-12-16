#include <stdio.h>
#include <ctype.h>
#define STARS "**********************************"

struct PlayerScores {
    int Army;
    int Heroes;
    int resources;
    int score;
};

void printStruct(struct PlayerScores *players, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("army: %d, heroes: %d, resources: %d, score: %d\n", players[i].Army, players[i].Heroes, players[i].resources, players[i].score);
    }
}

void buble_sort(struct PlayerScores *players, int n, int sort)
{
    struct PlayerScores temp;
    if (sort == 4){
        printf("Сортировка по общему счету: \n");
        for (int j = n; j > 1; j--)
        {
            for (int i = 0; i < j - 1; i++)
            {
                if (players[i].score < players[i+1].score)
                {
                    temp = players[i];
                    players[i] = players[i+1];
                    players[i+1] = temp;
                }
            }
        }
        printStruct(players, n);
    }
    else if (sort == 3){
        printf("Сортировка по кол-ву ресурсов: \n");
        for (int j = n; j > 1; j--)
        {
            for (int i = 0; i < j - 1; i++)
            {
                if (players[i].resources < players[i+1].resources)
                {
                    temp = players[i];
                    players[i] = players[i+1];
                    players[i+1] = temp;
                }
            }
        }
        printStruct(players, n);
    }
    else if (sort == 2){
        printf("Сортировка по кол-ву героев: \n");
        for (int j = n; j > 1; j--)
        {
            for (int i = 0; i < j - 1; i++)
            {
                if (players[i].Heroes < players[i+1].Heroes)
                {
                    temp = players[i];
                    players[i] = players[i+1];
                    players[i+1] = temp;
                }
            }
        }
        printStruct(players, n);
    }
    else if (sort == 1){
        printf("Сортировка по кол-ву армии: \n");
        for (int j = n; j > 1; j--)
        {
            for (int i = 0; i < j - 1; i++)
            {
                if (players[i].Army < players[i+1].Army)
                {
                    temp = players[i];
                    players[i] = players[i+1];
                    players[i+1] = temp;
                }
            }
        }
        printStruct(players, n);
    }
    printf("\nВведите любой символ для продолжения...");
    getchar();
    getchar();
}

void sort(struct PlayerScores *players, int n)
{
    int sort = 1;
    while ((sort > 0 && sort < 5))
    {
    printf("*****СОРТИРОВКА (по убыванию)*****\n");
    printf("Веберите сортировку:\n");
    printf("1. Сортировка по кол-ву армии\n");
    printf("2. Сортировка по кол-ву героев\n");
    printf("3. сортировка по кол-ву русурсов\n");
    printf("4. Сортировка по общему счету\n");
    printf("5. Выход\n");
    printf("%s\n", STARS);
    scanf("%d", &sort);
    if (sort > 4) break;
    printf("\n");
    buble_sort(players, n, sort);
    printf("\n");
    }
}

int main()
{
    struct PlayerScores players[]= {{1043, 43, 10030, 3305},
                                    {5004, 16, 4949, 500},
                                    {493, 3, 53, 43},
                                    {4324, 432, 3432, 2321},
                                    {43298, 432, 3, 3}};
    int n = sizeof(players)/sizeof(players[0]);
    printf("%s\n", STARS);
    printStruct(players, n);
    sort(players, n);
    return 0;
}
