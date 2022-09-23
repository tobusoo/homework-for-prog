#include <stdio.h>

int main()
{
    int i;
    printf("oct\tdec\thex\tchar\n");
    for (i = 0; i <= 127; i++){
        printf("%o\t%d\t%x\t%c\n", i, i, i, i);
    }
    return 0;
}
