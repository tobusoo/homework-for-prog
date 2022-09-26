#include <stdio.h>
#include <ctype.h>

int main()
{
    char symbol;
    int steps;
    int smbl;
    int k;
    printf("Lower letter: ");
    scanf("%c", &symbol);

    if (isupper(symbol)){
        steps = symbol - 'A' + 1;
        for (int i = 0; i < steps; i++){
            for (int j = i; j < steps - 1; j++){
                printf(" ");
            }
            for (k = 0; k <= i; k++){
                smbl = 'A' + k;
                printf("%c", smbl);
            }
            for (;k <= i * 2 ; k++){
                smbl = smbl - 1;
                printf("%c", smbl);
            }
            printf("\n");
        }
    } 
    else {
        printf("You are wrong!\n");
    }

    return 0;
}