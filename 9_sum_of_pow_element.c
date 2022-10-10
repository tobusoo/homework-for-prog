#include <stdio.h>
#include <math.h>

int main()
{
    int count, sum = 0;
    double n;
    int cur_pow; 
    printf("Введите первый элемент последовательности и их общее количество: ");
    scanf("%lf %d", &n,  &count);

    for (double i = 1; i <= count; i++){
        cur_pow = pow(n, i);
        sum += cur_pow;
        printf("%d ", cur_pow);
    }
    printf("\nSum = %d\n", sum);

    return 0;
}