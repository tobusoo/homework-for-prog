#include <stdio.h>
#include <stdlib.h>

struct Point {
    int *x;
};

struct Segment {
    struct Point m1;
    struct Point m2;
};

struct Segment find_max_segment(int *begin, int *end)
{
    int max_r = 0;
    int cur_r = 0;
    struct Segment result;
    for (int *i = begin; i < end; i++){
        for (int *j = i; j < end; j++){
            cur_r = abs(*j - *i);
            if (cur_r > max_r){
                max_r = cur_r;
                result.m1.x = i;
                result.m2.x = j;
            }
        }
    }
    printf("Максимальное расстояние между точками: %d\n", max_r);
    return result;
}

int main()
{
    // int array[4][2] = {{0, 1}, {2, 3}, {4, 5}, {6, 7}};
    int array2[10] = {43, 2, 5, 2, 6, 3, 6, 7, 8, 14};
    int *begin = array2;
    int *end = array2 + 10;
    struct Segment result = find_max_segment(begin, end);
    printf("result: Точка1:%d Точка2:%d\n", *result.m1.x, *result.m2.x);
    return 0;
}