#include <stdio.h>
#define MAX_POINTS 50


typedef struct Point{
    int x;
    int y;
} Point;

Point **chert_xernya_kakayuta(Point points[], int length, int chetvert, Point *result[], int *cnt)
{
    int k = 0;
    switch (chetvert)
    {
    case 1:
        for (int i = 0; i < length; i++){
            if (points[i].x > 0 && points[i].y > 0){
                result[k++] = &points[i];
                *cnt += 1;
            }
        }
        return result;
    case 2:
        for (int i = 0; i < length; i++){
            if (points[i].x < 0 && points[i].y > 0){
                result[k++] = &points[i];
                *cnt += 1;
            }
        }
        return result;
    case 3:
        for (int i = 0; i < length; i++){
            if (points[i].x < 0 && points[i].y < 0){
                result[k++] = &points[i];
                *cnt += 1;
            }
        }
        return result;
    case 4:
        for (int i = 0; i < length; i++){
            if (points[i].x > 0 && points[i].y < 0){
                result[k++] = &points[i];
                *cnt += 1;
            }
        }
        return result;
    default:
        printf("Ошибка, введите четверть от 1 до 4\n");
    }
    return NULL;
}


int main()
{
    Point points[] = {{1, 1}, {2, -1},{2, 3}, {-2, 2}, {-3, -3}, {2, 2}, {3, -5}, {-4, 1}, {-4243, -505}};
    Point *result[MAX_POINTS];
    int chetvert;
    int count = 0;
    int *cnt = &count;
    int size = sizeof(points) / (sizeof(int) * 2);

    printf("Введите четверть (от 1 до 4): ");
    scanf("%d", &chetvert);
    
    chert_xernya_kakayuta(points, size, chetvert, result, cnt);
    for (int i = 0; i < count; i++){
            printf("point %d: x = %d y = %d\n", i+1, result[i]->x, result[i]->y);
    }
    return 0;
}