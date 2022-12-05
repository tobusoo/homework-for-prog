#include <stdio.h>
#include <math.h>

struct Point {
    int *x;
    int *y;
};

struct Segment {
    struct Point m1;
    struct Point m2;
};

float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}

struct Segment find_max_segment(int *begin, int *end)
{
    float max_r = 0;
    float cur_r = 0;
    struct Segment result;

    for (int *i = begin; i < end; i+=2){
        int *k = i + 1;
        for (int *j = i; j < end; j+=2){
            int *l = j + 1;
            cur_r = distance(*i, *k, *j, *l);
            if (cur_r > max_r){
                max_r = cur_r;
                result.m1.x = i;
                result.m2.x = j;
                result.m1.y = k;
                result.m2.y = l; 
            }
            l+=2;
        }
        k+=2;
    }

    printf("Максимальное расстояние между 2 точками: %f\n", max_r);
    return result;
}

int main()
{
    int points;
    printf("Введите кол-во точек: ");
    scanf("%d", &points);

    int array_test[points][2];
    for (int i = 0; i < points; i++){
        printf("Введите %d точку (x, y): ", i+1);
        scanf("%d %d", &array_test[i][0], &array_test[i][1]);
    }

    int *begin = array_test[0];
    int *end = array_test[0] + (points*2);

    struct Segment result = find_max_segment(begin, end);
    
    printf("Точка1 x: %d y: %d\n", *result.m1.x, *result.m1.y);
    printf("Точка2 x: %d y: %d\n", *result.m2.x, *result.m2.y);

    return 0;
}
