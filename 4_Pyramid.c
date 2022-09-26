#include <stdio.h>
#include <ctype.h>

int main()
{
    char symbol;
    int steps;
    int smbl; //symblols for output
    printf("Lower letter: ");
    scanf("%c", &symbol);

    if (isupper(symbol)){
        steps = symbol - 'A' + 1;
        for (int i = 0; i < steps; i++){
            for (int j = i; j < steps - 1; j++){
                printf(" ");
            }
            for (int k = 0; k <= i * 2; k++){
                if (k <= i){
                    smbl = 'A' + k;
                    printf("%c", smbl);
                } else {
                    smbl = smbl - 1;
                    printf("%c", smbl);
                }
            }
            printf("\n");
        }
    } else {
        printf("You are wrong!\n");
    }

    return 0;
}
