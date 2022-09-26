#include <stdio.h>

int main()
{
    int x;
    _Bool check1, check2, check3, check4, check5;
    printf("Input x: ");
    scanf("%d", &x);

    check1 = 0 <= x;
    printf("1. check x ∈ [0; +inf) = %d\n", check1);

    check2 = 5 <= x && x <= 15;
    printf("2. check x ∈ [5; 15] = %d\n", check2);

    check3 = -1 < x && x < 1;
    printf("3. check x ∈ (-1; 1) = %d\n", check3);

    check4 = (-1 < x && x < 1) || (5 <= x && x <= 15);
    printf("4. check x ∈ (-1; 1) ∪ [5; 15] = %d\n", check4);

    check5 = (-1 < x && x < 1) || (5 <= x && x <= 15) || (x == 20) || (x == 100) || (x == 1000);
    printf("5. check x ∈ (-1; 1) ∪ [5; 15] ∪ {20, 100, 1000} = %d\n", check5);

    return 0;    
}