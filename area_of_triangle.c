#include <stdio.h>
#include <math.h>


int is_true(int side1, int side2, int side3)
{
    if (side1 + side2 > side3 && side2 + side3 > side1  && side1 + side3 > side2) {
        return 1;
    }
    return 0;
}


int main()
{
    int side1, side2, side3;
    float p;
    float area;

    printf("input 3 sides for triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (is_true(side1, side2, side3)==1) {
        p = (float)(side1 + side2 + side3) / 2;
        area = sqrt(p * (p - side1) * (p - side2) * (p - side3));
        printf("The area of the triangle = %f\n", area);
    }
    else {
        printf("The triangle does not exist!\n");
    }
    return 0;
}
