#include <stdio.h>
#include <math.h>

int main()
{
    const double eps = 0.0001;
    double n;
    printf("Input n: ");
    scanf("%lf", &n);
    double x = 1;
    double acc = 1;
    double x2;

    while (acc > eps) {
        x2 = (x + n / x) / 2;
        acc = fabs(x - x2);
        x = x2;
    } 

    printf("sqrt(%.4lf) = %.4lf\n", n, x);
    return 0;
}