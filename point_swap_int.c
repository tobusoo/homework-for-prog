#include <stdio.h>

void swap_int(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp; 
}

int main()
{
    int first = 5;
    int second = 6;
    int *fir = &first;
    int *sec = &second;
    int x = 10;
    const int y = 15;
    int *p1 = &x;
    int *p2 = &y;

    printf("p1: %p val = %d\n", &p1, *p1);
    printf("p2: %p val = %d\n", &p2, *p2);

    p2 = &x;
    *p2 = 11;
    printf("x: %d\n", *p2);

    printf("first = %d, second = %d\n", first, second);
    swap_int(fir, sec);    
    printf("After swap:\nfirst = %d, second = %d\n", first, second);
    return 0;
}
