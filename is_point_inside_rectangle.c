#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Rectangle {
    struct Point m1;
    struct Point m2;
};

int is_point_inside_rectangle(struct Point point, struct Rectangle rec)
{
    if (rec.m1.y < rec.m2.y){
        return (point.x < rec.m2.x && point.x > rec.m1.x) && (point.y < rec.m2.y && point.y > rec.m1.y);
    } else {
        return (point.x < rec.m2.x && point.x > rec.m1.x) && (point.y > rec.m2.y && point.y < rec.m1.y);
    }
}

struct Rectangle make_canonical_rectangle(struct Rectangle rectangle)
{
    struct Rectangle new_rectangle;

    if (rectangle.m1.y > rectangle.m2.y){
        new_rectangle.m1.x = rectangle.m1.x;
        new_rectangle.m1.y = rectangle.m2.y;
        new_rectangle.m2.x = rectangle.m2.x;
        new_rectangle.m2.y = rectangle.m1.y;
        return new_rectangle;
    }
    if (rectangle.m1.x > rectangle.m2.x){
        new_rectangle.m1.x = rectangle.m2.x;
        new_rectangle.m1.y = rectangle.m1.y;
        new_rectangle.m2.x = rectangle.m1.x;
        new_rectangle.m2.y = rectangle.m2.y;
        return new_rectangle;
    }
    return rectangle;
}

int main()
{
    int result;
    struct Point m;
    printf("Введите координаты точки (x, y): ");
    scanf("%d %d", &m.x, &m.y);

    struct Rectangle rec;
    printf("Введите координаты первой точки треугольника (x, y): ");
    scanf("%d %d", &rec.m1.x, &rec.m1.y);
    printf("Введите координаты второй точки треугольника (x, y): ");
    scanf("%d %d", &rec.m2.x, &rec.m2.y);

    result = is_point_inside_rectangle(m, rec);

    if (result) {
        printf("Точка находиться внутри прямоугольника\n");
    } else {
        printf("Точка не находиться внутри прямоугольника\n");
    }

    struct Rectangle new_rec = make_canonical_rectangle(rec); 
    printf("Каноническая форма:\n");
    printf("new_rec1 x: %d y: %d\n", new_rec.m1.x, new_rec.m1.y);
    printf("new_rec2 x: %d y: %d\n", new_rec.m2.x, new_rec.m2.y);
    return 0;
}
