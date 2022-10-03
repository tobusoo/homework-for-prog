#include <stdio.h>

int main()
{
    int d, m, y;
    printf("Введите свою дату рождения: ");
    scanf("%d %d %d", &d, &m, &y);
    switch(m){
        case 12:
            if (d >= 22){
                printf("По знаку зодиака вы Козерог\n");
            } else {
                printf("По знаку зодиака вы Стрелец\n");
            }
            break;
        case 11:
            if (d >= 22){
                printf("По знаку зодиака вы Стрелец\n");
            } else {
                printf("По знаку зодиака вы Скорпион");
            }
            break;
        case 10:
            if (d >= 23){
                printf("По знаку зодиака вы Скорпион\n");
            } else {
                printf("По знаку зодиака вы Весы");
            }
            break;
        case 9:
            if (d >= 23){
                printf("По знаку зодиака вы Весы\n");
            } else {
                printf("По знаку зодиака вы Дева\n");
            }
            break;
        case 8:
            if (d >= 23){
                printf("По знаку зодиака вы Дева\n");
            } else {
                printf("По знаку зодиака вы Лев\n");
            }
            break;
        case 7:
            if (d >= 23){
                printf("По знаку зодиака вы Лев\n");
            } else {
                printf("По знаку зодиака вы Рак\n");
            }
            break;
        case 6:
            if (d >= 21){
                printf("По знаку зодиака вы Рак\n");
            } else {
                printf("По знаку зодиака вы Близнецы\n");
            }
            break;
        case 5:
            if (d >= 21){
                printf("По знаку зодиака вы Близнецы\n");
            } else {
                printf("По знаку зодиака вы Телец\n");
            }
            break;
        case 4:
            if (d >= 21){
                printf("По знаку зодиака вы Телец\n");
            } else {
                printf("По знаку зодиака вы Овен\n");
            }
            break;
        case 3:
            if (d >= 21){
                printf("По знаку зодиака вы Овен\n");
            } else {
                printf("По знаку зодиака вы Рыба\n");
            }
            break;
        case 2:
            if (d >= 19){
                printf("По знаку зодиака вы Рыбы\n");
            } else {
                printf("По знаку зодиака вы Водолей\n");
            }
            break;
        case 1:
            if (d >= 20){
                printf("По знаку зодиака вы Водолей\n");
            } else {
                printf("По знаку зодиака вы Козерог\n");
            }
    }
    return 0;
}
