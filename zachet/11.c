#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Rectangle {
    struct Point m1;
    struct Point m2;
};

int perimetr(struct Rectangle rec)
{
    int width = rec.m2.x - rec.m1.x;
    int heigth = rec.m2.y - rec.m1.y;
    return width * 2 + heigth * 2;
}

int main()
{
    struct Rectangle rectangle = {{1, 1}, {5, 5}};

    int res =  perimetr(rectangle);

    printf("result: %d\n", res);

    return 0;
}